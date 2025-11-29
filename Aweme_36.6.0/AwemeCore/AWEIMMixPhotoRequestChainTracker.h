@class NSError, NSLock;

@interface AWEIMMixPhotoRequestChainTracker : NSObject

@property (readonly, nonatomic) long long actionType;
@property (nonatomic) double wholeJobStartTime;
@property (nonatomic) double wholeJobEndTime;
@property (nonatomic) double uploadStartTime;
@property (nonatomic) double uploadEndTime;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double requestEndTime;
@property (nonatomic) BOOL uploadSuccess;
@property (nonatomic) BOOL requestSuccess;
@property (nonatomic) BOOL wholeJobSuccess;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSLock *sharedLock;

- (void)onRequestSuccess;
- (void)onRequestStart;
- (void)stopWithSuccess:(BOOL)a0 error:(id)a1;
- (void)onUploadStart;
- (void)onUploadSuccess;
- (void)p_recordCurrentTimeToStore:(double *)a0;
- (id)p_genTrackParams;
- (void).cxx_destruct;
- (void)start;
- (id)initWithActionType:(long long)a0;

@end
