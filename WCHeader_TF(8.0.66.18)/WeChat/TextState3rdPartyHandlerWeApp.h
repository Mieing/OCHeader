@class TextStateWeAppBuffer;

@interface TextState3rdPartyHandlerWeApp : TextState3rdPartyBaseHandler

@property (retain, nonatomic) TextStateWeAppBuffer *buffer;

- (unsigned int)type;
- (BOOL)supportCustomMedia;
- (id)initWithBuffer:(id)a0 keyBuffer:(id)a1;
- (BOOL)preferCustomView;
- (id)customView;
- (BOOL)doSourceActionWithViewController:(id)a0 scene:(unsigned int)a1;
- (id)username;
- (id)path;
- (void).cxx_destruct;

@end
