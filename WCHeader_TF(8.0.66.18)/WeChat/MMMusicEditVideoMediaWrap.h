@class NSString;

@interface MMMusicEditVideoMediaWrap : WCPlayerHttpMediaWrap

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *identifier;

- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)initWithEmpty;
- (id)getFormatVideoPath;
- (void).cxx_destruct;

@end
