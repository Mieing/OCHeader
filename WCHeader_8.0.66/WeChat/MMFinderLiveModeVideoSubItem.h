@class NSString;

@interface MMFinderLiveModeVideoSubItem : MMFinderLiveModeItem <PBCoding>

@property (nonatomic) int videoSubMode;
@property (readonly, nonatomic) BOOL isPortrait;
@property (nonatomic) BOOL isPureAudioMode;
@property (nonatomic) BOOL disableVideoLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_videoSubMode;
+ (void)PBArrayAdd_isPureAudioMode;
+ (void)PBArrayAdd_disableVideoLandscape;
+ (void)initialize;
+ (id)getVideoSubModeItems;
+ (id)getVideoSubModeItem:(BOOL)a0;

- (id)getPBPropertyTable;

@end
