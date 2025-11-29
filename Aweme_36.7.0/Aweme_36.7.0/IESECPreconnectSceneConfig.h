@class NSArray, NSString;

@interface IESECPreconnectSceneConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long launchDelayTime;
@property (nonatomic) unsigned long long launchAliveTime;
@property (nonatomic) unsigned long long needMatchPortrait;
@property (copy, nonatomic) NSArray *portraitMatchList;
@property (copy, nonatomic) NSArray *hosts;
@property (copy, nonatomic) NSString *bizString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
