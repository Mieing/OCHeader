@class NSString, UIImageView, IESLiveUserCardStore, UIView, UILabel;

@interface IESLiveUserCardPublicGroupButton : UIView <IESLiveUserCardConfigProtocol>

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *contentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithTag:(long long)a0 isShowWhite:(BOOL)a1;
- (void)configWithStore:(id)a0;
- (void)onActionPublicGroup:(id)a0;
- (void)onActionPublicGroupCreateCompletion:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;
- (BOOL)shouldShow;

@end
