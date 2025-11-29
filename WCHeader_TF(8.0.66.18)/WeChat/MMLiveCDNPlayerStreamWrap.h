@class NSString, MMLiveCdnStreamInfo;

@interface MMLiveCDNPlayerStreamWrap : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *streamId;
@property (copy, nonatomic) NSString *originalUrl;
@property (retain, nonatomic) MMLiveCdnStreamInfo *cdnStreamInfo;
@property (nonatomic) unsigned long long switchTimestamp;
@property (nonatomic) BOOL switchByUser;

- (BOOL)isSameStreamWithPlayingUrl:(id)a0;
- (BOOL)isSameStreamWithOriginalUrl:(id)a0;
- (void).cxx_destruct;

@end
