@class NSString;

@interface AWEServerHandleVideoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *algorithm;
@property (copy, nonatomic) NSString *videoConf;
@property (copy, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
