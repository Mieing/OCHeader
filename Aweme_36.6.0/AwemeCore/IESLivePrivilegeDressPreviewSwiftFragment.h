@interface IESLivePrivilegeDressPreviewSwiftFragment : IESLiveRoomComponent <IESLivePrivilegeDressPreviewInterface> {
    void /* unknown type, empty encoding */ currentDressPreview;
    void /* unknown type, empty encoding */ currentUserId;
    void /* unknown type, empty encoding */ currentDressPreviewModel;
    void /* unknown type, empty encoding */ getSameClickTrackParams;
    void /* unknown type, empty encoding */ timer;
}

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (BOOL)preloadDressPreviewWithUserId:(id)a0 dressPreviewModel:(id)a1;
- (id)fetchDressPreviewWithUserId:(id)a0;
- (void)trackPackageCenterGetSameShow;
- (void)trackProfileCardFloatShow;
- (void)trackProfileCardGetSameClick;
- (void)trackEffectShowForCleanStrategy;
- (id)getProfileCardShowSource;
- (id)buildGetSameClickTrackParams;
- (id)buildPackageCenterTrackParams;
- (id)buildCommonTrackerParams;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
