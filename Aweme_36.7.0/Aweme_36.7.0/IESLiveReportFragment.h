@class IESLiveReportStore;

@interface IESLiveReportFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveReportStore *reportStore;

- (void)componentCreate;
- (void)componentMount;
- (void)addMoreToolsItem;
- (id)reportConfigModel;
- (void)p_tapReportItem;
- (void)trackReportBtnShow;
- (void)addLandscapeMoreToolsItem;
- (void).cxx_destruct;

@end
