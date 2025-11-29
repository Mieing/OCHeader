@class NSArray, NSData, NSString;

@interface GameHaowanPostInfoPbObj : GameHaowanQueryPostInfo <PBCoding>

@property (retain, nonatomic) NSArray *mediaList;
@property (retain, nonatomic) NSData *continueData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_postId;
+ (void)PBArrayAdd_postType;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_extra;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_continueData;
+ (void)PBArrayAdd_isBroken;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
