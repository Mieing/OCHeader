@interface TCOpenSDKErrorUtil : NSObject

+ (id)openSDKErrorMsgForErrorCode:(int)a0;
+ (id)openSDKErrorWithCode:(int)a0 extraInfo:(id)a1;
+ (long long)filterURLErrorCode:(long long)a0;
+ (id)openSDKErrorWithCommonServerCode:(int)a0 extraInfo:(id)a1;
+ (id)apiResponse:(id)a0;
+ (id)openSDKErrorFromOSError:(id)a0;
+ (void)apiResponseConvert:(id)a0;
+ (id)apiResponseFromErrorCode:(int)a0;

@end
