@class NSString;

@interface AWEStickerGameModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long gameType;
@property (nonatomic) long long gameScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gameTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;


@end
