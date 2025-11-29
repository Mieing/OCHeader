@class NSString;

@interface MMWebNativeVideoMediaWrap : WCPlayerHttpMediaWrap

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *identifier;

- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)initWithEmpty;
- (void).cxx_destruct;

@end
