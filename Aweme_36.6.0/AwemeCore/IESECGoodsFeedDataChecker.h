@interface IESECGoodsFeedDataChecker : NSObject

+ (void)checkEntranceInfoWithEnterFrom:(id)a0 enterTo:(id)a1 entranceInfo:(id)a2;
+ (void)reportErrorWithEnterFrom:(id)a0 enterTo:(id)a1 error:(id)a2;
+ (void)checkEntranceInfoInnerWithEnterFrom:(id)a0 enterTo:(id)a1 entranceInfoDict:(id)a2;

@end
