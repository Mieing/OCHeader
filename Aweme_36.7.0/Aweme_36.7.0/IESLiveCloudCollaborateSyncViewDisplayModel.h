@class NSArray, NSString;

@interface IESLiveCloudCollaborateSyncViewDisplayModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *viewDisplays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewDisplaysJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
