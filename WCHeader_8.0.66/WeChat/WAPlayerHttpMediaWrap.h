@class NSString;

@interface WAPlayerHttpMediaWrap : WCPlayerHttpMediaWrap

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *localFilePath;
@property (retain, nonatomic) NSString *referer;

- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)initWithEmpty;
- (id)getHTTPReferer;
- (id)getFormatVideoPath;
- (id)getTempVideoPath;
- (void).cxx_destruct;

@end
