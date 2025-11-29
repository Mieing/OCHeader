@class NSString, NSArray;

@interface IESECMallPreloadItemModel : MTLModel <MTLJSONSerializing, IESECMallPreloadItemProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (copy, nonatomic) NSArray *urls;
@property (nonatomic) unsigned long long cacheStrategy;
@property (nonatomic) long long cdnExpiredTime;
@property (nonatomic) long long resourceScene;

+ (id)resourceSceneJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
