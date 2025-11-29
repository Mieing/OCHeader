@class NSString;

@interface OMJRenderingParams : NSObject

@property (readonly, nonatomic) BOOL enableHDR;
@property (readonly, nonatomic) BOOL enablePrefetchSeqGen;
@property (readonly, copy, nonatomic) NSString *p3To709LUTFilePath;

- (id)initWithEnableHDR:(BOOL)a0;
- (id)initWithEnableHDR:(BOOL)a0 enablePrefetchSeqGen:(BOOL)a1;
- (id)initWithEnableHDR:(BOOL)a0 enablePrefetchSeqGen:(BOOL)a1 p3To709LUTFilePath:(id)a2;
- (void).cxx_destruct;

@end
