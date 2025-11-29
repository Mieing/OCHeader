@class NSString, AWEURLModel;

@interface AWEButtonIconInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iconId;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (nonatomic) long long position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
