@interface NSStringHelper : NSObject

+ (BOOL)isDigit:(id)a0 Length:(unsigned long long)a1;
+ (BOOL)isPhoneNum:(id)a0;
+ (BOOL)isBankCardNum:(id)a0;
+ (BOOL)isUserIDNum:(id)a0;
+ (BOOL)invalidateID:(id)a0;
+ (BOOL)isHuiXiangID:(id)a0;
+ (BOOL)isTaiBaoID:(id)a0;
+ (BOOL)ISHkID:(id)a0;
+ (BOOL)ISTwID:(id)a0;
+ (BOOL)ISMcID:(id)a0;
+ (id)randomStringWithLength:(long long)a0;

@end
