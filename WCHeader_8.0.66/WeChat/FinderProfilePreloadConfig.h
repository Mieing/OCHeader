@class NSData;

@interface FinderProfilePreloadConfig : WXPBGeneratedMessage

@property (nonatomic) BOOL isPrefetch;
@property (nonatomic) unsigned int profileWaitTime;
@property (retain, nonatomic) NSData *preloadBuffer;

+ (void)initialize;

@end
