@class NSString;
@protocol RTVVoipRingtoneMusicModelProtocol;

@interface RTVVoipRingtoneDetailModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) id<RTVVoipRingtoneMusicModelProtocol> musicInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)musicInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
