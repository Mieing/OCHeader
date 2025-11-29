@class NSString, AWESearchOutFlowIconModel;

@interface AWESearchOutFlowProductInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWESearchOutFlowIconModel *outflowIcon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *ironManURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
