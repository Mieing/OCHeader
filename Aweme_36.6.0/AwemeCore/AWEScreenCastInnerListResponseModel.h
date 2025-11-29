@class NSArray, NSNumber;

@interface AWEScreenCastInnerListResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *awemeModels;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *total;
@property (nonatomic) BOOL hasLocateItem;
@property (retain, nonatomic) NSNumber *locateOffset;
@property (retain, nonatomic) NSNumber *locateFrom;
@property (nonatomic) BOOL locateItemAvailable;
@property (nonatomic) BOOL forwardHasMore;
@property (retain, nonatomic) NSNumber *locateItemCursor;
@property (retain, nonatomic) NSNumber *postSerialStyle;
@property (retain, nonatomic) NSNumber *waterFallCardStyle;

+ (id)awemeModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
