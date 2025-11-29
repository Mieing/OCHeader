@class NSString, AWEURLModel;

@interface AWECaptionAnchorModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) AWEURLModel *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
