@class NSString;

@interface MMLivePlayerHttpMediaWrap : WCPlayerHttpMediaWrap

@property (retain, nonatomic) NSString *url;

- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)initWithEmpty;
- (void).cxx_destruct;

@end
