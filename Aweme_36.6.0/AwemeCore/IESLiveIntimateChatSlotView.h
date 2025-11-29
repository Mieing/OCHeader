@class HTSGuestInfoView, HTSLiveUser;

@interface IESLiveIntimateChatSlotView : UIView

@property (retain, nonatomic) HTSGuestInfoView *infoView;
@property (nonatomic) BOOL isStrongRemindView;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL isConnecting;
@property (nonatomic) BOOL isPreView;

- (void)fitOutGuestInfoView:(id)a0;
- (void)addStrongRemindView:(id)a0;
- (void)removeStrongRemindView;
- (BOOL)isSameStrongRemindWithUser:(id)a0;
- (void).cxx_destruct;

@end
