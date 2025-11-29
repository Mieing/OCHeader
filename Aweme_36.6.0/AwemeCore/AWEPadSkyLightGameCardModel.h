@class NSString, NSNumber;

@interface AWEPadSkyLightGameCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSNumber *playerCount;
@property (copy, nonatomic) NSString *recommendReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
