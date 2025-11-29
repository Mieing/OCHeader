@class NSString, NSNumber, NSArray;

@interface AWECoCreatorExternModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *customVerify;
@property (copy, nonatomic) NSString *enterpriseVerifyReason;
@property (copy, nonatomic) NSString *talentVerify;
@property (nonatomic) BOOL hasRequestAwemeList;
@property (nonatomic) long long awemeCount;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (copy, nonatomic) NSArray *awemeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
