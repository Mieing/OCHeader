@class NSString, NSData;

@interface HMDCrashAnalysisBase : NSObject

@property (retain, nonatomic) NSString *objectInfo;
@property (retain, nonatomic) NSString *stringInfo;
@property (retain, nonatomic) NSData *bytesBefore;
@property (retain, nonatomic) NSData *bytesBegin;
@property (nonatomic, getter=hasDecodeError) BOOL decodeError;

- (void)decode:(const void *)a0 size:(unsigned long long)a1 count:(unsigned long long)a2;
- (id)initWithDescription:(const void *)a0 size:(unsigned long long)a1 count:(unsigned long long)a2;
- (id)postDict;
- (void).cxx_destruct;

@end
