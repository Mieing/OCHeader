@interface MMQRCodeUtility : NSObject

+ (id)getStringFromUTF8Bytes:(const char *)a0 length:(int)a1;
+ (id)preProcessImageBeforeRealScan:(id)a0;
+ (id)urlsOfMultiQRCode:(id)a0;
+ (id)urlOfQRCode:(id)a0;

@end
