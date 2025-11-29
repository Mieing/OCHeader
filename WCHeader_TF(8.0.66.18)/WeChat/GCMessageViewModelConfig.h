@class NSString, Channel;
@protocol GCMessageViewModelDelegate, GCMessageViewModeUnreadCntProtocol;

@interface GCMessageViewModelConfig : NSObject

@property (weak, nonatomic) id<GCMessageViewModelDelegate> viewModelDelgate;
@property (weak, nonatomic) id<GCMessageViewModeUnreadCntProtocol> unReadCntDelegate;
@property (retain, nonatomic) NSString *chatRoomName;
@property (nonatomic) long long channelId;
@property (retain, nonatomic) NSString *channelName;
@property (nonatomic) BOOL readOnly;
@property (retain, nonatomic) NSString *cantSendReason;
@property (retain, nonatomic) Channel *channel;
@property (nonatomic) BOOL isCache;

- (void).cxx_destruct;

@end
