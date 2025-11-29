@class MsgDataDownloadLogic, CMessageWrap;

@interface WAMsgSelectInfo : MMObject

@property (retain, nonatomic) CMessageWrap *msg;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL expired;
@property (nonatomic) BOOL downloading;
@property (nonatomic) BOOL downloadingHD;
@property (nonatomic) BOOL showPercent;
@property (nonatomic) double percent;
@property (retain, nonatomic) MsgDataDownloadLogic *downloadLogic;

- (void)stopDownloading;
- (void).cxx_destruct;

@end
