@class NSMutableArray;

@interface AWEShowFantaInsertADFeature : AWEShowFantaFeature

@property (retain, nonatomic) NSMutableArray *metaDatas;
@property (nonatomic) long long adClickCount;
@property (nonatomic) long long adClickBlockCount;
@property (nonatomic) long long adSkipCount;
@property (nonatomic) long long adWatchCount;

+ (id)featureKey;
+ (id)JSONKeyPathsByPropertyKey;

- (id)popMetaDataWithAweme:(id)a0;
- (void)pushMetaDataWithAweme:(id)a0 adShowTime:(double)a1;
- (id)popMetaDataWithAwemeID:(id)a0;
- (void)clearDataWhenExpired;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isExpired;

@end
