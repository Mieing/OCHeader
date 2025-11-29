@class NSString, CUploadHDHeadImgWrap;
@protocol HeadImgDelegate;

@interface CUploadHDHeadImg : MMObject <PBMessageObserverDelegate> {
    NSString *m_nsFile;
    CUploadHDHeadImgWrap *m_currTask;
}

@property (weak, nonatomic) id<HeadImgDelegate> delegate;

+ (id)generateHDHeadData:(id)a0;
+ (id)generateHDHeadDataLow:(id)a0;
+ (id)generateNormalHeadImage:(id)a0;
+ (id)generateNormalHeadData:(id)a0;

- (id)init;
- (void)dealloc;
- (void)reset;
- (BOOL)uploadTask:(id)a0;
- (BOOL)uploadTaskWithCgi:(id)a0;
- (BOOL)uploadTaskWithCdn:(id)a0;
- (void)sendHeadImgRequestWithTaskInfo:(id)a0 uploadTask:(id)a1;
- (unsigned int)InternalUpload:(id)a0 imgType:(unsigned int)a1 qualityType:(unsigned int)a2;
- (void)stopUpload;
- (unsigned int)uploadHDImg:(id)a0 imgType:(unsigned int)a1;
- (unsigned int)uploadHDImg:(id)a0 imgType:(unsigned int)a1 qualityType:(unsigned int)a2;
- (BOOL)IsUploadIngImg;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onUploadComplete:(id)a0;
- (void)onUploadPartFail:(id)a0;
- (void).cxx_destruct;

@end
