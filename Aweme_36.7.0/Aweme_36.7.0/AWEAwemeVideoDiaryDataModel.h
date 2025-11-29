@class NSNumber, NSArray, NSString;

@interface AWEAwemeVideoDiaryDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasNextPage;
@property (nonatomic) BOOL hasPrePage;
@property (copy, nonatomic) NSArray *awemeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
