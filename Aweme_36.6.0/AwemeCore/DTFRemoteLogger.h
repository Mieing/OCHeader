@interface DTFRemoteLogger : NSObject

+ (void)writeLogWithActionId:(id)a0 extParams:(id)a1 appId:(id)a2 seed:(id)a3 ucId:(id)a4;
+ (void)writeLogWithActionId:(id)a0 extParams:(id)a1 appId:(id)a2 seed:(id)a3 ucId:(id)a4 bizType:(id)a5;
+ (void)setUploadBlock:(id /* block */)a0;
+ (void)writeLogWithActionId:(id)a0 extParams:(id)a1 appId:(id)a2 seed:(id)a3 ucId:(id)a4 bizType:(id)a5 formatterDictionary:(id)a6;
+ (void)protectExtentionParams:(id)a0;
+ (long long)levelNumberForString:(id)a0;
+ (id)convertToStringFromExtDictionary:(id)a0;
+ (id)descriptionFromDictionary:(id)a0;
+ (id)convertToStringFromArray:(id)a0;
+ (id)convertToStringFromDictionary:(id)a0 kvSeparator:(id)a1 componentsSeparator:(id)a2;
+ (void)writeLogWithLogDictionary:(id)a0;
+ (void)load;
+ (void)setSDKVersion:(id)a0;
+ (void)upload;

@end
