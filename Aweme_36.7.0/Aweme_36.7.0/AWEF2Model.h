@class NSString, AWEURLModel;

@interface AWEF2Model : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *iconURL;
@property (retain, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
