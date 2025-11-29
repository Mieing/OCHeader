@class NSString, NSDictionary;

@interface AWEUGPendantVideoTaskDetail : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasDone;
@property (nonatomic) long long videoDuration;
@property (copy, nonatomic) NSString *secretToken;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
