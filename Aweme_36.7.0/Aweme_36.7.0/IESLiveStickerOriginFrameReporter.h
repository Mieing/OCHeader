@class NSTimer;

@interface IESLiveStickerOriginFrameReporter : NSObject

@property (retain, nonatomic) NSTimer *reportTimer;

- (void)startReportOriginalFrameforRoomID:(id)a0;
- (void)stopReport;
- (void)uploadData:(id)a0 forRoomID:(id)a1 videoID:(id)a2;
- (void).cxx_destruct;

@end
