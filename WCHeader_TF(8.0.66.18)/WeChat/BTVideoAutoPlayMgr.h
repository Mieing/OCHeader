@class MPLandingPageCgiHandler, MemoryMappedKV, NSString;

@interface BTVideoAutoPlayMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MPLandingPageCgiHandler *m_brandCgiHandler;
@property (retain, nonatomic) MemoryMappedKV *videoDataSlotMMKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genVideoAutoPlayInfoWebviewExtraInfo:(id)a0;
+ (unsigned long long)calcStatusFromAction:(unsigned long long)a0 andCurStatus:(unsigned long long)a1;
+ (long long)getAutoPlayerViewContentModeByVideoInfo:(unsigned int)a0 videoHeight:(unsigned int)a1 viewWidth:(double)a2 viewHeight:(double)a3;

- (void)setVideoData:(id)a0;
- (double)getVideoInitialTimeByVid:(id)a0;
- (void)requestBrandTLItemVideoInfo:(id)a0 mpUrl:(id)a1 oldVideoUrl:(id)a2 videoExpiredTime:(unsigned long long)a3 handler:(id /* block */)a4;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initData;
- (void)clearAllData;
- (void).cxx_destruct;

@end
