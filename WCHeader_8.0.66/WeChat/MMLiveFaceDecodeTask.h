@class NSData;

@interface MMLiveFaceDecodeTask : NSObject

@property (retain, nonatomic) NSData *encodedData;
@property (nonatomic) double dataRecvTime;

+ (BOOL)checkParamValidForEncodedData:(id)a0;
+ (id)decode:(id)a0;
+ (char *)getDecodedRGBATexBufFromJbigBuf:(char *)a0 length:(int)a1 dstWidth:(unsigned long long *)a2 dstHeight:(unsigned long long *)a3;
+ (char *)transferTexBufFromAlphaToRGBA:(char *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;

- (id)initWithEncodedData:(id)a0;
- (void).cxx_destruct;

@end
