@class NSString;

@interface AWEStickerRPVideoModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *redPacketVideoURL;
@property (nonatomic) double firstShowTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
