@class NSString, AWEVideoPublishViewModel;

@interface ACCMusicTracker : NSObject <ACCMusicTrackerProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isMusicListRecommendByContent;
@property (nonatomic) BOOL isRecommendMusicListPreload;
@property (copy, nonatomic) NSString *musicShowRank;
@property (nonatomic) unsigned long long musicRecType;
@property (copy, nonatomic) NSString *musicCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (id)initWithPublishModel:(id)a0;
- (void)trackMusicPartialStreamDownload:(id)a0 success:(BOOL)a1 duration:(double)a2 useCache:(BOOL)a3;
- (void)trackMusicDownload:(id)a0 success:(BOOL)a1 duration:(double)a2 isStreamDownload:(BOOL)a3 isAudioPlayer:(BOOL)a4 useCache:(BOOL)a5;
- (void)trackMusic:(id)a0 favorite:(BOOL)a1 enterMethod:(id)a2 recType:(unsigned long long)a3 rank:(long long)a4;
- (void)trackPanelShowWithDuration:(long long)a0;
- (void)trackMusicShow:(id)a0 recType:(unsigned long long)a1 tabName:(id)a2 rank:(long long)a3;
- (void)trackMusicClick:(id)a0 recType:(unsigned long long)a1 tabName:(id)a2 rank:(long long)a3;
- (void)trackMusicSelect:(id)a0 recType:(unsigned long long)a1 tabName:(id)a2 rank:(long long)a3;
- (void)trackMusicDeselect:(id)a0 enterMethod:(id)a1 recType:(unsigned long long)a2 tabName:(id)a3 rank:(long long)a4;
- (void)trackImportMusicManageWithType:(id)a0;
- (void)trackExtractMusicClick;
- (void)trackExtractMusicWithDuration:(double)a0;
- (void)trackMusicPickerSearchClick:(id)a0 tabName:(id)a1;
- (void)trackMusicPickerDismissWithMethod:(id)a0;
- (void)trackMusicPickerSearchShow:(id)a0;
- (void)trackMusicPickerSwitchToTab:(id)a0;
- (void)trackMusicPickerFirstFrameWithDuration:(double)a0 recType:(unsigned long long)a1;
- (void)trackMusicDislike:(id)a0;
- (id)commonMusicTrackParamsWithMusic:(id)a0 recType:(unsigned long long)a1 tabName:(id)a2 rank:(long long)a3;
- (id)commonTemplateTrackParams;
- (void).cxx_destruct;

@end
