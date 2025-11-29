@class NSString, NSArray;

@interface AWEAIGCAIAssetRecordListModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (retain, nonatomic) NSArray *recordList;
@property (copy, nonatomic) NSString *nextCursor;
@property (nonatomic) BOOL hasNext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
