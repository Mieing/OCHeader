@class NSString, NSArray;

@interface AWELuckyVideoLimitItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *currentScene;
@property (nonatomic) unsigned long long videoLimitTime;
@property (copy, nonatomic) NSString *videoLimitTip;
@property (copy, nonatomic) NSArray *fromSceneArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
