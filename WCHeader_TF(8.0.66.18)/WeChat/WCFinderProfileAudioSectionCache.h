@class NSArray, MMListenCategoryItem, NSString;

@interface WCFinderProfileAudioSectionCache : NSObject <PBCoding>

@property (retain, nonatomic) NSArray *audios;
@property (nonatomic) long long audioCount;
@property (retain, nonatomic) MMListenCategoryItem *audioCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_audios;
+ (void)PBArrayAdd_audioCount;
+ (void)PBArrayAdd_audioCategory;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
