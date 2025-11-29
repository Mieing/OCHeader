@class NSString;

@interface MMEasterEggNewYearActivityPlayerHttpMediaWrap : WCPlayerHttpMediaWrap

@property (retain, nonatomic) NSString *resourceURL;

- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)init;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getCacheDirectory;
- (void).cxx_destruct;

@end
