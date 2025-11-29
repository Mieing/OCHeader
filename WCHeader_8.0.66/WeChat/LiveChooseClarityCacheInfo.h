@class NSString;

@interface LiveChooseClarityCacheInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long liveTaskId;
@property (retain, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSString *videoQualityLevelDesc;
@property (nonatomic) unsigned int settingTime;
@property (nonatomic) unsigned int cdnQualityTag;
@property (nonatomic) unsigned int currentUin;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) unsigned int videoQualityLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveTaskId;
+ (void)PBArrayAdd_tagName;
+ (void)PBArrayAdd_videoQualityLevelDesc;
+ (void)PBArrayAdd_settingTime;
+ (void)PBArrayAdd_cdnQualityTag;
+ (void)PBArrayAdd_currentUin;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_videoQualityLevel;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
