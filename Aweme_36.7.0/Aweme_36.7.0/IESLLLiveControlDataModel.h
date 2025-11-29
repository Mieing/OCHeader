@class NSString;

@interface IESLLLiveControlDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cardUrl;
@property (nonatomic) long long cardStyle;
@property (nonatomic) long long showSeconds;
@property (nonatomic) long long showDuration;
@property (nonatomic) long long needShow;
@property (nonatomic) long long updateOnlySticker;
@property (nonatomic) long long delayFadeTime;
@property (nonatomic) unsigned long long liveStickerStyle;
@property (nonatomic) long long isStickerProduct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
