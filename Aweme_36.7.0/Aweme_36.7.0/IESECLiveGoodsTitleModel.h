@class NSString, NSArray, IESECLivePlatformTagsModel;

@interface IESECLiveGoodsTitleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) IESECLivePlatformTagsModel *platformTags;
@property (nonatomic) long long maxLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
