@class NSString, GPServerHandleVideoModel;

@interface GPServerHandleVideoData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) GPServerHandleVideoModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
