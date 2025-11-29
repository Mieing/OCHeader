@class NSString;

@interface FinderNativeDramaInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *description;
@property (nonatomic) unsigned int episodeCount;
@property (nonatomic) unsigned int stickyTime;
@property (nonatomic) unsigned long long readCount;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *filingNumber;
@property (nonatomic) unsigned int consumerMode;

+ (void)initialize;

@end
