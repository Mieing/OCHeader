@class NSString;

@interface AWEMVChannelFPSOptConfigModel : MTLModel <MTLJSONSerializing, AWEMVChannelFPSOptConfigModelProtocol>

@property (nonatomic) BOOL enableTrackImageNoSizeParam;
@property (nonatomic) BOOL enableMVCellLikeImageLocal;
@property (nonatomic) BOOL enableMVCellMixTest;
@property (nonatomic) BOOL enableMVCardRightBottomLabelOpt;
@property (nonatomic) BOOL enableDislikeViewOffscreenOpt;
@property (nonatomic) BOOL enableGetFontScaleOpt;
@property (nonatomic) BOOL enableClientABValCache;
@property (nonatomic) BOOL enableABTestExpValCache;
@property (nonatomic) BOOL enableMVCellIndexGetOpt;
@property (nonatomic) BOOL enableDCImageResourceViewOpt;
@property (nonatomic) BOOL enableDCLogInBackground;
@property (nonatomic) BOOL enableBindDiggWhenIdle;
@property (nonatomic) BOOL enableMVTrackWhenIdle;
@property (nonatomic) BOOL enableNoRelayoutWhenUIConfigUnchange;
@property (nonatomic) BOOL enableMVCellMaskViewReuse;
@property (nonatomic) BOOL enableMVCellLessAutolayout;
@property (nonatomic) BOOL enableMVScrollDidScrollOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
