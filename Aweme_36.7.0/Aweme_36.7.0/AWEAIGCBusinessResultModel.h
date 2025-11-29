@class NSString, NSArray, NSDictionary, AWEAIGCBaseBusinessCustomModel;

@interface AWEAIGCBusinessResultModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (copy, nonatomic) NSString *tipMessage;
@property (copy, nonatomic) NSString *jsonData;
@property (retain, nonatomic) NSArray *data;
@property (copy, nonatomic) NSDictionary *task;
@property (copy, nonatomic) NSString *stickerId;
@property (retain, nonatomic) AWEAIGCBaseBusinessCustomModel *businessParseModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
