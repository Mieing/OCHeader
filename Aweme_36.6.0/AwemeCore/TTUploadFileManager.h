@class ResponseProtocol, TTUploadTaskParam, TTUploadUrlManager, RangeManager;

@interface TTUploadFileManager : NSObject

@property (retain, nonatomic) ResponseProtocol *serverResponse;
@property (retain, nonatomic) TTUploadUrlManager *urlManager;
@property (retain, nonatomic) TTUploadTaskParam *param;
@property (retain, nonatomic) RangeManager *rangeManager;

+ (id)getTempSlicePath:(id)a0 lastStep:(long long)a1 length:(long long *)a2 error:(id *)a3;
+ (long long)getStepLength:(id)a0 lastStep:(long long)a1;

- (id)initWithConfig:(id)a0 param:(id)a1;
- (id)getSliceInfo:(id *)a0;
- (BOOL)isUploadCompleted;
- (BOOL)isUploadFailed;
- (void)updateSliceStatus:(long long)a0 sliceInfo:(id)a1;
- (id)makeSliceInfo:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;

@end
