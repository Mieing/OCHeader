@class StatusFooterJumpListen, TextStateListenMediaView;

@interface TextState3rdPartyListenHandler : TextState3rdPartyBaseHandler

@property (retain, nonatomic) StatusFooterJumpListen *jumpInfo;
@property (weak, nonatomic) TextStateListenMediaView *mediaView;

- (unsigned int)type;
- (id)initWithBuffer:(id)a0 keyBuffer:(id)a1;
- (BOOL)doSourceActionWithViewController:(id)a0 scene:(unsigned int)a1;
- (BOOL)useCoverForContent;
- (BOOL)supportCustomMedia;
- (id)mediaContentView;
- (id)mediaCoverView;
- (id)generatePlayerConfiguration;
- (void).cxx_destruct;

@end
