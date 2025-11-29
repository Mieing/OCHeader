@interface AWEPaymentPreviewConfigModel : AWEBaseApiModel

@property (nonatomic) BOOL isPreviewVideo;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) unsigned long long setType;

+ (id)JSONKeyPathsByPropertyKey;

@end
