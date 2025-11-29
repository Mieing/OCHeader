@class NSString, YataProtocolModel;

@interface YataMessageObject : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) YataProtocolModel *content;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
