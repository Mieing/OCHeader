@interface AWESearchGeneralCardNameProcessor : NSObject

+ (id)adExtraDataFromDynamicPatch:(id)a0;
+ (id)adCardNameFromModel:(id)a0;
+ (BOOL)isAdCard:(id)a0;
+ (id)cardNameFromModel:(id)a0 andRenderModel:(id)a1;
+ (id)refreshExtraInfoFromModel:(id)a0;
+ (id)getAdDataFromDynamicPatch:(id)a0;
+ (id)adExtraDataFromModel:(id)a0;
+ (id)cardNameFromAdModel:(id)a0 andRenderModel:(id)a1;
+ (id)cardNameFromNonAdModel:(id)a0 andRenderModel:(id)a1;
+ (id)adExtraDataFromSearchModel:(id)a0;
+ (id)getOriginAdRefreshedExtraInfo:(id)a0;
+ (id)nonAdCardNameFromModel:(id)a0 awemeModel:(id)a1;

@end
