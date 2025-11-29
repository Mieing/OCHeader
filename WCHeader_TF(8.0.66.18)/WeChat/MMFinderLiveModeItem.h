@class NSString;

@interface MMFinderLiveModeItem : NSObject <PBCoding>

@property (nonatomic) int liveMode;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isSameModeItem:(id)a0;
- (BOOL)isVideoSubItem;
- (BOOL)isAudioSubItem;
- (BOOL)isGameSubItem;
- (BOOL)isSwitchValid;
- (void).cxx_destruct;

@end
