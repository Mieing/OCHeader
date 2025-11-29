@class UILabel, NSString, UIView;
@protocol IESECCommentSKUSpecHeaderDelegate;

@interface IESECCommentSKUSpecHeaderView : UICollectionReusableView <IESECCommentSKUSpecHeaderDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *warningLabel;
@property (retain, nonatomic) UILabel *sizeComponentLabel;
@property (retain, nonatomic) UILabel *sizeAssistantLabel;
@property (retain, nonatomic) UIView *sizeAssistantView;
@property (retain, nonatomic) UIView *separator;
@property (weak, nonatomic) id<IESECCommentSKUSpecHeaderDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
