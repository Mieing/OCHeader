@class NSString, CreateInfoResponse_FansClubConfig, IESLiveFansClubModeSwitchApi, NSNumber;

@interface IESLiveAnchorFansClubModeViewModel : NSObject

@property (retain, nonatomic) IESLiveFansClubModeSwitchApi *fansClubModeSwitchApi;
@property (retain, nonatomic) CreateInfoResponse_FansClubConfig *fansClubConfig;
@property (retain, nonatomic) NSNumber *currentMode;
@property (copy, nonatomic) NSString *notice;
@property (copy, nonatomic) NSString *ruleTips;
@property (copy, nonatomic) NSString *ruleURL;
@property (nonatomic) BOOL canSwitchMode;
@property (copy, nonatomic) NSString *disableToast;
@property (copy, nonatomic) NSString *switchAlertTitle;
@property (copy, nonatomic) NSString *switchAlertText;
@property (copy, nonatomic) NSString *switchAlertHighLightText;
@property (copy, nonatomic) id /* block */ switchFansClubModeBlock;

- (void)switchFansClubMode:(id)a0 fromMode:(id)a1 completion:(id /* block */)a2;
- (void)updateWithFansClubConfig:(id)a0;
- (id)initWithFansClubConfig:(id)a0;
- (void).cxx_destruct;

@end
