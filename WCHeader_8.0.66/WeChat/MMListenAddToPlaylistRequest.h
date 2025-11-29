@class BaseRequest, NSString, MMListenFormatDesc, MMListenItem, MMListenAudioBaseRequest;

@interface MMListenAddToPlaylistRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int opType;
@property (retain, nonatomic) MMListenItem *listenCtx;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) BOOL isCancel;
@property (retain, nonatomic) MMListenFormatDesc *fromDesc;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest;

+ (void)initialize;

@end
