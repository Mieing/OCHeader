@interface AWELivePaidLiveConfigUserRight : AWEBaseApiModel

@property (nonatomic) long long viewRight;
@property (nonatomic) long long duration;
@property (nonatomic) long long delivery;
@property (nonatomic) BOOL needDeliveryNotice;

+ (id)JSONKeyPathsByPropertyKey;

@end
