@class NSString;

@interface AWENearbyLifeExposeCardConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long exposeCardType;
@property (nonatomic) long long exposeCardNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;


@end
