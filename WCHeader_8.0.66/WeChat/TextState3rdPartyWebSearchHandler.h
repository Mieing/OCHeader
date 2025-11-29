@class NSString;

@interface TextState3rdPartyWebSearchHandler : TextState3rdPartyBaseHandler

@property (retain, nonatomic) NSString *keyword;

- (BOOL)supportCustomMedia;
- (id)initWithBuffer:(id)a0 keyBuffer:(id)a1;
- (unsigned int)type;
- (BOOL)doSourceActionWithViewController:(id)a0 scene:(unsigned int)a1;
- (void).cxx_destruct;

@end
