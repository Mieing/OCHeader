@class NSString;

@interface AWEStickerRPVideoModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *redPacketVideoURL;
@property (retain, nonatomic) NSString *redPacketVideoID;
@property (retain, nonatomic) NSString *redPacketVideoOrderID;
@property (nonatomic) double firstShowTime;
@property (nonatomic) BOOL hasBeenCollected;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
