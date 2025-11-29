@class NSArray, NSMutableArray;

@interface AWEPOITempoPOITagDataModel : NSObject

@property (retain, nonatomic) NSMutableArray *mRankTags;
@property (retain, nonatomic) NSMutableArray *mHonorTags;
@property (copy, nonatomic) NSArray *rankTags;
@property (copy, nonatomic) NSArray *honorTags;
@property (nonatomic) double totalWidth;

- (id)initWithRankTags:(id)a0 honorTags:(id)a1;
- (void)addRankTag:(id)a0;
- (void)addHonorTag:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
