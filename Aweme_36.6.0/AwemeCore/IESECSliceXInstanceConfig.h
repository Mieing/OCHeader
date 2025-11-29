@class NSString, NSDictionary;
@protocol SLIBizFontService;

@interface IESECSliceXInstanceConfig : NSObject <IESECSliceXInstanceConfig, NSCopying>

@property (nonatomic) unsigned long long scaleLogicalWidthBase;
@property (nonatomic) BOOL enableClickDebounce;
@property (nonatomic) unsigned long long clickIntervalTime;
@property (nonatomic) double viewScaleRatio;
@property (nonatomic) double fontScaleRatio;
@property (retain, nonatomic) NSString *imageBizTag;
@property (retain, nonatomic) NSDictionary *customViewScaleByKey;
@property (retain, nonatomic) NSDictionary *customFontScaleByKey;
@property (nonatomic) BOOL appThemeChangedAutoRefresh;
@property (nonatomic) BOOL disableCJKAutoKerning;
@property (weak, nonatomic) id<SLIBizFontService> bizFontService;
@property (readonly, nonatomic) long long deltaTime;
@property (readonly, nonatomic) NSString *bizIdentify;
@property (readonly, nonatomic) BOOL fitPhoneWidth;
@property (copy, nonatomic) NSDictionary *customGlobalProps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
