@class NSString, TTUrlStrategy, NSMutableArray;

@interface TTDownloadSliceTaskConfig : NSObject

@property (copy) NSString *urlKey;
@property (copy) NSString *secondUrl;
@property (retain) TTUrlStrategy *urlStrategy;
@property char sliceNumber;
@property (copy) NSString *sliceTempStorageName;
@property long long sliceStatus;
@property long long startByte;
@property long long endByte;
@property long long hasDownloadedLength;
@property long long sliceTotalLength;
@property (nonatomic) long long throttleNetSpeed;
@property char retryTimes;
@property (nonatomic) char retryTimesMax;
@property BOOL isCancel;
@property (retain) NSMutableArray *subSliceInfoArray;
@property BOOL isUpdateUrl;
@property (copy) NSString *userNewestUrl;

- (long long)mergeSubSlice:(id)a0 fileHandle:(id)a1 mergeDataLength:(long long)a2 isSkipGetContentLength:(BOOL)a3 isDiskStrict:(BOOL)a4 subSliceStartCount:(unsigned int)a5 subSliceStartOffset:(unsigned long long)a6;
- (BOOL)updateSubSliceRange:(id)a0 subSlice:(id)a1 fileRealSize:(long long)a2 nserror:(id *)a3;
- (BOOL)updateSliceStatus:(id)a0 isBackgroundTask:(BOOL)a1 nserror:(id *)a2;
- (void)updateRange:(id)a0;
- (BOOL)createSubSlice:(id)a0 preSubSlice:(id)a1 nserror:(id *)a2;
- (long long)mergeSubSlice:(id)a0 fileHandle:(id)a1 mergeDataLength:(long long)a2 isSkipGetContentLength:(BOOL)a3;
- (BOOL)updateSliceConfig:(id)a0 isBackgroundTask:(BOOL)a1 nserror:(id *)a2;
- (BOOL)checkLastSubSlice:(id)a0;
- (id)getRealUrl:(id)a0 secondUrl:(id)a1;
- (void)clearInvalidObject;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)resetConfig;

@end
