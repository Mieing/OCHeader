@class NSString, AWEURLModel;

@interface AWEIMMessageVideoAnimationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *resourceName;
@property (retain, nonatomic) AWEURLModel *resourceUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
