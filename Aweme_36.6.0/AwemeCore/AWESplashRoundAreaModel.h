@class NSString;

@interface AWESplashRoundAreaModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) long long textIndex;
@property (nonatomic) double serverTime;
@property (copy, nonatomic) NSString *countdownText;
@property (nonatomic) BOOL hideDayCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
