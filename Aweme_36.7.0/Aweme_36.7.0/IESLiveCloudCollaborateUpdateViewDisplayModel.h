@class NSString, NSArray;

@interface IESLiveCloudCollaborateUpdateViewDisplayModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *viewId;
@property (retain, nonatomic) NSArray *sources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
