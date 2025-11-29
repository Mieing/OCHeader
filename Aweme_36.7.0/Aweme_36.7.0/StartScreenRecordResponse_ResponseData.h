@class HighlightUrl, ScreenRecordRunInfo;

@interface StartScreenRecordResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HighlightUrl *recordURL;
@property (nonatomic) BOOL hasRecordURL;
@property (retain, nonatomic) ScreenRecordRunInfo *screenRecord;
@property (nonatomic) BOOL hasScreenRecord;

+ (id)descriptor;

@end
