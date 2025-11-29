@class UIImageView, NSString;
@protocol IESECMallEventProtocol;

@interface IESECMallSkeletonGYLCardView : UIView <IESECMallSkeletonCardProtocol>

@property (retain, nonatomic) UIImageView *coverPlaceHolder;
@property (retain, nonatomic) UIImageView *titlePlaceHolder;
@property (retain, nonatomic) id<IESECMallEventProtocol> eventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
