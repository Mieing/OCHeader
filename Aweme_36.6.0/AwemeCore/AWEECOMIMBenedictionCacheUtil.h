@interface AWEECOMIMBenedictionCacheUtil : NSObject

+ (BOOL)needShowTitleBarBkgImg;
+ (BOOL)needShowCommonQuestionMsgBenediction;
+ (BOOL)isInAtmosphereTime;
+ (id)cacheKeyWithStr:(id)a0;
+ (BOOL)needShowBenedictionMsg;
+ (void)storeBenedictionTccConfigWithTccDict:(id)a0;
+ (id)easterImgUrl;
+ (double)easterImgWidth;
+ (double)easterImgHeight;

@end
