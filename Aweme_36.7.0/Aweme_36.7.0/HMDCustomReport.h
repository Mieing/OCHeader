@class NSString;

@interface HMDCustomReport : NSObject

@property (retain, nonatomic) NSString *customInfo;
@property (nonatomic) BOOL isDirtySize;
@property (copy, nonatomic) NSString *customUploadChannel;
@property (nonatomic) int customInterval;
@property (nonatomic) BOOL refineEnable;
@property (nonatomic) int refineType;

+ (id)sharedReport;

- (void)__matrixCustomCollectWithInfo:(id)a0 isDirtySize:(BOOL)a1;
- (BOOL)setMatrixFilter:(id)a0 value:(id)a1;
- (void)__matrixCustomCollectWithInfo:(id)a0;
- (void)__matrixCustomCollect;
- (void)matrixCustomCollectWithInfo:(id)a0;
- (void)matrixCustomCollectWithInfo:(id)a0 isDirtySize:(BOOL)a1;
- (void)matrixCustomCollect;
- (void).cxx_destruct;
- (void)start;

@end
