@class NSString, IESLivePrivilegeEntranceProfileAnimationFactory, NSNumber;
@protocol IESLivePrivilegeEntranceProfileViewEventHandler;

@interface IESLivePrivilegeEntranceBlankView : UIView <IESLivePrivilegeEntranceProfileViewProtocol>

@property (weak, nonatomic) id<IESLivePrivilegeEntranceProfileViewEventHandler> delegate;
@property (retain, nonatomic) IESLivePrivilegeEntranceProfileAnimationFactory *animationFactory;
@property (retain, nonatomic) NSString *lastFansclubIconState;
@property (retain, nonatomic) NSString *lastVipState;
@property (retain, nonatomic) NSNumber *isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
