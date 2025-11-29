@class NSString, HMDCrashBinaryImage;

@interface HMDCrashFrameInfo : NSObject

@property (nonatomic) unsigned long long addr;
@property (retain, nonatomic) HMDCrashBinaryImage *image;
@property (copy, nonatomic) NSString *symbolName;
@property (nonatomic) unsigned long long symbolAddress;
@property (nonatomic) BOOL symbolicated;

+ (id)frameInfoWithAddr:(unsigned long long)a0 imageLoader:(id)a1;

- (void).cxx_destruct;

@end
