@interface BrandAdDataParser : NSObject

+ (id)adDataItemForMsgWrap:(id)a0;
+ (id)adDataItemForContent:(id)a0;
+ (id)adInfoDicForMsgWrap:(id)a0;
+ (id)adInfoDicForContent:(id)a0;
+ (id)aidForContent:(id)a0;
+ (id)aidForAdInfoDic:(id)a0;
+ (id)traceIdForContent:(id)a0;
+ (id)traceIdForAdInfoDic:(id)a0;
+ (id)bizTypeForAdInfoDic:(id)a0;

@end
