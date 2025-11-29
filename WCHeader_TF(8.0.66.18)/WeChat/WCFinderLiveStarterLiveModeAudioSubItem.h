@class NSString;

@interface WCFinderLiveStarterLiveModeAudioSubItem : WCFinderLiveStarterLiveModeSubItem <PBCoding>

@property (nonatomic) unsigned long long audioSubType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_audioSubType;
+ (void)PBArrayAdd_redDotPathOuter;
+ (void)PBArrayAdd_redDotPathInner;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
