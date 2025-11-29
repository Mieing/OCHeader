@class NSArray, NSDictionary, NSString;

@interface AWEDoubleColumnSearchMerchandiseQueryModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *renderInfo;
@property (copy, nonatomic) NSDictionary *businessInfo;
@property (copy, nonatomic) NSDictionary *styleInfo;
@property (copy, nonatomic) NSDictionary *rebackParams;
@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) NSString *passThrough;
@property (copy, nonatomic) NSDictionary *recommendedWordsInfo;
@property (nonatomic) BOOL isTrendingTracked;

+ (id)styleInfoJSONTransformer;
+ (id)renderInfoJSONTransformer;
+ (id)businessInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)updateWithControllerInfo:(id)a0 filterManager:(id)a1;
- (void)updateWithQueryModel:(id)a0 filterManager:(id)a1;
- (BOOL)removeItemWithModel:(id)a0;
- (BOOL)deleteInsertEndSelectionWithModel:(id)a0 filterManager:(id)a1;
- (BOOL)defaultAddItemWithModel:(id)a0 filterManager:(id)a1;
- (BOOL)addItemWithModel:(id)a0 filterManager:(id)a1;
- (BOOL)updateQueryModel:(id)a0 filterManager:(id)a1;
- (void).cxx_destruct;

@end
