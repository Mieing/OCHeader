@class NSString, NSArray;

@interface AWEOpenAuthInfoClientInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *clientName;
@property (copy, nonatomic) NSString *clientIcon;
@property (copy, nonatomic) NSArray *protocolInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protocolInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
