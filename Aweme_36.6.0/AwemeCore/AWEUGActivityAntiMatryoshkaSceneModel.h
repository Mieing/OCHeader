@class NSString;

@interface AWEUGActivityAntiMatryoshkaSceneModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *channel;
@property (nonatomic) BOOL removeOldAtFirst;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
