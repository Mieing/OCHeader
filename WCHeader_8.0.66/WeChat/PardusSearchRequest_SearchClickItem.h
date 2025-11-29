@class NSString;

@interface PardusSearchRequest_SearchClickItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *searchPrefix;
@property (nonatomic) unsigned long long searchTimestampMs;
@property (nonatomic) unsigned int clickType;
@property (nonatomic) BOOL localOrNet;

+ (void)initialize;

@end
