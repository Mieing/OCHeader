@class NSString, NSDictionary, IESLiveAnchorInteractiveGameXplayInfo;

@interface IESLiveAnchorInteractiveGameXplayModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *exeName;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL isDebugUnity;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameXplayInfo *xPlayGameInfo;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xPlayGameInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;


@end
