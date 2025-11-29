@class NSString, UILabel, UIView, IESECSKUSizeAssistantComponent;
@protocol IESECSKUSpecHeaderDelegate;

@interface IESECSKUSpecHeaderView : UICollectionReusableView <IESECSKUSpecHeaderDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *warningLabel;
@property (retain, nonatomic) UILabel *sizeComponentLabel;
@property (retain, nonatomic) UILabel *sizeAssistantLabel;
@property (retain, nonatomic) UIView *sizeAssistantView;
@property (retain, nonatomic) UIView *separator;
@property (weak, nonatomic) id<IESECSKUSpecHeaderDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) IESECSKUSizeAssistantComponent *sizeAssistant;
@property (copy, nonatomic) NSString *warning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
