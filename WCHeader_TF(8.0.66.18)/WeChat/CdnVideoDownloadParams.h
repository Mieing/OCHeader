@class NSData, NSString;

@interface CdnVideoDownloadParams : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *backsrcHit;
@property (retain, nonatomic) NSString *videoflag;
@property (nonatomic) unsigned int cdnVideoFormat;
@property (nonatomic) unsigned int videoflagPolicy;
@property (nonatomic) int durationSeconds;
@property (nonatomic) BOOL isSmall;

+ (void)initialize;

@end
