@class NSString;

@interface WCFinderLiveStarterLiveModeVideoSubItem : WCFinderLiveStarterLiveModeSubItem <PBCoding>

@property (nonatomic) unsigned long long videoSubType;
@property (nonatomic) BOOL isPureAudioMode;
@property (nonatomic) BOOL disableVideoLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_videoSubType;
+ (void)PBArrayAdd_isPureAudioMode;
+ (void)PBArrayAdd_redDotPathOuter;
+ (void)PBArrayAdd_redDotPathInner;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isLandscapSubItem;

@end
