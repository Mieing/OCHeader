@class NSString;

@interface BrandMpVideoHttpMediaWrap : WCPlayerHttpMediaWrap

@property (retain, nonatomic) NSString *vid;

- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)initWithVid:(id)a0;
- (void).cxx_destruct;

@end
