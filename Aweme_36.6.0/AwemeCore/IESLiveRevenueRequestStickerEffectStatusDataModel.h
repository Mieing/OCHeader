@class NSString;

@interface IESLiveRevenueRequestStickerEffectStatusDataModel : IESLiveBridgeModel

@property (nonatomic) BOOL stickerEffectClosed;
@property (copy, nonatomic) NSString *stickerEffectClosedNoticeText;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
