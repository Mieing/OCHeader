@class NSString, AWESearchDiscussDynamicInsertModel;

@interface AWESearchDiscussDynamicInsertResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWESearchDiscussDynamicInsertModel *data;
@property (copy, nonatomic) NSString *logId;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
