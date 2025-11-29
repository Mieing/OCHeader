@class NSString, NSArray, NSDictionary;

@interface AWERecordInspirationCategoryDetail : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *cardInsertInfo;
@property (retain, nonatomic) NSArray *lists;
@property (nonatomic) long long cursor;
@property (nonatomic) long long longCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
