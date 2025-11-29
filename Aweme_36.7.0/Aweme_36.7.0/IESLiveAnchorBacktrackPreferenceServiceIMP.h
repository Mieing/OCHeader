@class IESLiveCoreABManager, NSString;

@interface IESLiveAnchorBacktrackPreferenceServiceIMP : NSObject <IESLiveAnchorBacktrackPreferenceService>

@property (retain, nonatomic) IESLiveCoreABManager *abManager;
@property (nonatomic) BOOL backtrackAllowed;
@property (copy, nonatomic) NSString *backtrackSettingPage;
@property (nonatomic) BOOL backtrackDidClicked;
@property (nonatomic) BOOL backtrackGuidePageDotShow;
@property (nonatomic) BOOL backtrackPageDotShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isGuideBacktrackShownBefore;
- (void)markBacktrackGuideShown;
- (BOOL)liveRoomBacktrackBubbleDidShow;
- (void)markLiveRoomBacktrackBubbleShow;
- (BOOL)backtrackDidOpen;
- (unsigned long long)backtrackRecordTime;
- (BOOL)isCombinedRecordEntryDidClicked;
- (void)markCombinedRecordEntryDidClicked;
- (void).cxx_destruct;

@end
