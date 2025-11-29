@class NSString;

@interface AWEFeedBottomShootUtils : NSObject <AWEDetailBottomShootBarControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detailBottomViewMusicShootSameCommonTrackParamsWithReferString:(id)a0 enterFrom:(id)a1 detailBottomInfoDict:(id)a2 awemeModel:(id)a3;
+ (id)detailBottomViewMusicShootSameCommonMusicInfoWithDetailBottomInfoDict:(id)a0 awemeModel:(id)a1;
+ (id)trendShootSameCommonTrackParamsWithReferString:(id)a0 enterFrom:(id)a1 detailBottomInfoDict:(id)a2 awemeModel:(id)a3 trendInfoModel:(id)a4;
+ (id)trendShootSameExtraInfoWithDetailBottomInfoDict:(id)a0 outerAwemeModel:(id)a1 innerAwemeModel:(id)a2;
+ (void)trackForDetailPageClickShootSameForSchemaWithDetailPageName:(id)a0 shootSameSchemaType:(unsigned long long)a1 extraInfo:(id)a2;
+ (void)extractTrendsInfoFrom:(id)a0 toDictionary:(id)a1 ignoreFlashMob:(BOOL)a2;
+ (void)overrideAwemeRelatedInfo:(id)a0 toDictionary:(id)a1;
+ (id)transferShootSameTypeToStringFormatWithIntType:(unsigned long long)a0;
+ (id)detailBottomViewMusicShootSameOriginVideoInfoWithDetailBottomInfoDict:(id)a0 awemeModel:(id)a1;


@end
