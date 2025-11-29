@class MMListenExptInfo, MMListenAudioFunctionContext;

@interface MMListenAudioBaseRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int displayType;
@property (nonatomic) unsigned int preloadMarkReason;
@property (retain, nonatomic) MMListenAudioFunctionContext *funcCtx;
@property (retain, nonatomic) MMListenExptInfo *exptInfo;

+ (void)initialize;

@end
