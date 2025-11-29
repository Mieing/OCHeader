@class NSString;

@interface AWELuckyCatCallBackInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *callBackUrl;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
