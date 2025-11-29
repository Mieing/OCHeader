@class NSString;

@interface MMFinderLiveModeAudioSubItem : MMFinderLiveModeItem <PBCoding>

@property (nonatomic) int audioSubMode;
@property (readonly, nonatomic) BOOL isKtv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_audioSubMode;
+ (void)initialize;
+ (id)getAudioSubModeItems;
+ (id)getAudioSubModeItem:(BOOL)a0;

- (id)getPBPropertyTable;

@end
