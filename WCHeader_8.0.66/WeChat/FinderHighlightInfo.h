@class NSString;

@interface FinderHighlightInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int beginRelativeTimestamp;
@property (nonatomic) unsigned int endRelativeTimestamp;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSString *uniqId;

+ (void)initialize;

@end
