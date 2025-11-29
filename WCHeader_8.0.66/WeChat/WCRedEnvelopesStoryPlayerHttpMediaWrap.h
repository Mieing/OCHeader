@class NSString;

@interface WCRedEnvelopesStoryPlayerHttpMediaWrap : WCPlayerHttpMediaWrap

@property (retain, nonatomic) NSString *resourceURL;
@property (nonatomic) unsigned int subtypeId;
@property (nonatomic) long long index;

- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)getFormatVideoPath;
- (id)getTempVideoPath;
- (id)initWithSubtypeId:(unsigned int)a0 resIndex:(long long)a1;
- (void).cxx_destruct;

@end
