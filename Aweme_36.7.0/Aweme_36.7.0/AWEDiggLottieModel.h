@class NSString;

@interface AWEDiggLottieModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) BOOL canBomb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
