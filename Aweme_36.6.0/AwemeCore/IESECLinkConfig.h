@class NSString;

@interface IESECLinkConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long action;
@property (copy, nonatomic) NSString *linkURL;
@property (copy, nonatomic) NSString *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
