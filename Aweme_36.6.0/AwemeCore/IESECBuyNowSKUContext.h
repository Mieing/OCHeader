@class NSString, NSDictionary, IESECSKUParamsModel, NSNumber;
@protocol IESECSKUViewDelegate;

@interface IESECBuyNowSKUContext : NSObject <IESECSKUContextProtocol>

@property (retain, nonatomic) IESECSKUParamsModel *paramsModel;
@property (nonatomic) long long ultimateBuyAB;
@property (nonatomic) long long ultimateBuyNewVersion;
@property (nonatomic) BOOL ultimateBuyContainerOpt;
@property (retain, nonatomic) NSString *detailUrl;
@property (nonatomic) BOOL fromSKU;
@property (retain, nonatomic) NSDictionary *rawSKUParams;
@property (retain, nonatomic) NSNumber *heightPercent;
@property (retain, nonatomic) NSString *sourceBTMToken;
@property (retain, nonatomic) NSDictionary *inputParams;
@property (retain, nonatomic) NSDictionary *rawOrderParams;
@property (retain, nonatomic) NSString *recommendInfoCache;
@property (retain, nonatomic) NSDictionary *skuTrackParamsCache;
@property (retain, nonatomic) NSString *SKUSessionID;
@property (retain, nonatomic) NSString *skuUniqueID;
@property (nonatomic) BOOL fromNative;
@property (weak, nonatomic) id<IESECSKUViewDelegate> skuDelegate;
@property (retain, nonatomic) id<IESECSKUViewDelegate> skuSchemaDelegate;
@property (nonatomic) BOOL schemaOptimize;
@property (nonatomic) BOOL containerOpt;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } showFrame;
@property (retain, nonatomic) NSString *skuSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateInputParamsForSchemaParams:(id)a0;
+ (id)skuParamsFromRawOrderParams:(id)a0;
+ (BOOL)enableSliceXFitPhoneWidth;
+ (id)p_updatedNewVersionQueryParams:(id)a0 selectedBuyNum:(id)a1 selectedSpecIDArr:(id)a2;
+ (id)p_updatedOldVersionQueryParams:(id)a0 selectedBuyNum:(id)a1 selectedSpecIDArr:(id)a2;
+ (id)p_updatedParamsWithProductID:(id)a0 selectedBuyNum:(id)a1 selectedSpecIDArr:(id)a2 newVersionParams:(BOOL)a3;
+ (id)p_curSelectedSpecIDsStrFromArr:(id)a0;
+ (id)updatedQueryParamsFromOrigin:(id)a0 selectedBuyNum:(id)a1 selectedSpecIDArr:(id)a2;
+ (double)contentScale;

- (void)p_composeNewVersionParamsWithShowRequest:(id)a0;
- (void)p_composeOldVersionParamsWithShowRequest:(id)a0;
- (void)p_composeCommonParamsWithShowRequest:(id)a0;
- (void)p_generateNewInputParams;
- (void)p_generateOldInputParams;
- (id)downloadPassthroughWithOrderParams:(id)a0;
- (id)cacheRecommendInfoWithOrderParams:(id)a0;
- (id)initWithShowRequest:(id)a0;
- (void)generateInputParams;
- (void).cxx_destruct;

@end
