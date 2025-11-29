@class NSString, AWEIMImageResourceURLInfo;

@interface AWEIMMixedImageInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMImageResourceURLInfo *resourceURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
