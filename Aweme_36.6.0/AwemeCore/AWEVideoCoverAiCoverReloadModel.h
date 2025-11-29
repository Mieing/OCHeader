@class NSArray, NSString;

@interface AWEVideoCoverAiCoverReloadModel : AWEBaseApiModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *aiCoverList;
@property (retain, nonatomic) NSString *uniqID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aiCoverListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
