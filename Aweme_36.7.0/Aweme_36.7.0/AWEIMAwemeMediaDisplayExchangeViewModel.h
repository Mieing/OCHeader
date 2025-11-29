@class AWEIMMessage, NSString, NSDate, AWEIMAwemeMediaDisplayImageViewModel, AWEIMMessageAttachmentDownloadViewModel;
@protocol AWEIMExchangeMessageProtocol;

@interface AWEIMAwemeMediaDisplayExchangeViewModel : NSObject

@property (retain, nonatomic) AWEIMMessage<AWEIMExchangeMessageProtocol> *message;
@property (retain, nonatomic) AWEIMAwemeMediaDisplayImageViewModel *imageViewModel;
@property (retain, nonatomic) AWEIMMessageAttachmentDownloadViewModel *downloadVM;
@property (copy, nonatomic) NSString *videoTKey;
@property (copy, nonatomic) NSString *videoSKey;
@property (copy, nonatomic) NSString *videoMD5;
@property (copy, nonatomic) NSString *videoLocalURL;
@property (copy, nonatomic) NSString *videoURL;
@property (copy, nonatomic) NSString *posterLocalURL;
@property (nonatomic) BOOL hasLocoalVideoResource;
@property (nonatomic) BOOL hasRemoteUrl;
@property (retain, nonatomic) NSDate *triggerPlayingDate;
@property (nonatomic) double startPlayTimestamp;
@property (copy, nonatomic) id /* block */ didFetchUrlBlock;
@property (copy, nonatomic) id /* block */ fetchErrorBlock;

- (id)p_enterFromStringWithMessageID:(id)a0;
- (void)getImageWithMessage:(id)a0 completion:(id /* block */)a1;
- (void)p_getPosterImageWithMessage:(id)a0 completion:(id /* block */)a1;
- (void)configContextWithCurrentMessage;
- (void)parseLocalFilePath;
- (void)configVideoUrl;
- (void)tracePlay;
- (void)tracePause;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
