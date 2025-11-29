@class IESLivePrivilegeEntranceApi, NSString, IESLivePriviledgeEntranceButtonModel;

@interface IESLivePrivilegeEntranceButtonViewModel : IESLiveCubeViewModel

@property (nonatomic) BOOL enableFlash;
@property (retain, nonatomic) IESLivePrivilegeEntranceApi *privilegeApi;
@property (copy, nonatomic) NSString *defaultButtonTitle;
@property (copy, nonatomic) NSString *defaultPageURL;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) IESLivePriviledgeEntranceButtonModel *entranceButtonModel;

- (void)viewDidShowWithLabel:(id)a0;
- (void)tipDidShowWithBubble:(id)a0;
- (void)tapTip;
- (void)tapButtonWithExtraParams:(id)a0;
- (void)updateButtonModelWith:(id)a0;
- (void)startBufferWithDuration:(double)a0;
- (void)p_setPrivilegeClickStatusWithType:(long long)a0;
- (id)schemaString:(id)a0 byAppendingParams:(id)a1;
- (void)tr_buttonClickWithLabel:(id)a0;
- (void)tr_tipClick;
- (void)tr_viewDidShowWithLabel:(id)a0;
- (void)tr_tipDidShowWithBubble:(id)a0;
- (void)p_stopPrivilegeBuffer;
- (id)privilegeTrackParams;
- (long long)p_privilegeClickStatus;
- (void)actionEnableFlash:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
