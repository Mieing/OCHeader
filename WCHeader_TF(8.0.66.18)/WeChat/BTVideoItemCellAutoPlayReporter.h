@class BTVideoItemCellAutoPlayReportData;

@interface BTVideoItemCellAutoPlayReporter : MMObject {
    BTVideoItemCellAutoPlayReportData *m_data;
    unsigned int m_autoPlayId;
    unsigned long long m_buffStartTime;
    unsigned long long m_firstFrameStartTime;
    BOOL m_reportOnVideoPlayOnce;
    BOOL m_reportOnVideoPauseOnce;
}

- (void)reset;
- (id)init;
- (void)onVideoCreate:(id)a0;
- (void)onVideoPrepareToPlay;
- (void)onVideoPlay;
- (void)onVideoPause:(unsigned long long)a0 playDuration:(unsigned long long)a1;
- (void)onVideoBeginBuffering;
- (void)onVideoEndBuffering;
- (void)onOpenVideoLandingPage;
- (unsigned long long)getPlayDuration;
- (unsigned int)getAutoPlayId;
- (void)doReport:(unsigned int)a0 buffDuration:(unsigned long long)a1;
- (void).cxx_destruct;

@end
