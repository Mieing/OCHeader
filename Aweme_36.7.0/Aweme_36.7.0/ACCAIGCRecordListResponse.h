@class NSString, NSArray;

@interface ACCAIGCRecordListResponse : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSArray *recordList;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long limitExceededCounts;
@property (nonatomic) long long totalCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
