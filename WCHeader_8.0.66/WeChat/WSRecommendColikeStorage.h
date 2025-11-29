@class NSString, NSMutableArray;

@interface WSRecommendColikeStorage : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *colikeHideList;
@property (retain, nonatomic) NSMutableArray *colikeBlockList;
@property (nonatomic) unsigned long long hideVersion;
@property (nonatomic) unsigned long long blockVersion;
@property (nonatomic) BOOL hasRequestColikeHideData;
@property (nonatomic) BOOL hasRequestColikeBlockData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_colikeHideList;
+ (void)PBArrayAdd_colikeBlockList;
+ (void)PBArrayAdd_hideVersion;
+ (void)PBArrayAdd_blockVersion;
+ (void)PBArrayAdd_hasRequestColikeHideData;
+ (void)PBArrayAdd_hasRequestColikeBlockData;
+ (void)initialize;
+ (id)getRecommendColikeStoragePath;
+ (BOOL)saveRecommendColikeStorage:(id)a0;
+ (id)loadRecommendColikeStorage;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
