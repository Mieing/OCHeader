@class NSString, NSData, FinderEventInfo;

@interface FinderSearchHotWord : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *hotwordText;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) NSString *reasonWording;
@property (retain, nonatomic) FinderEventInfo *eventInfo;
@property (nonatomic) unsigned long long hotwordId;

+ (void)initialize;

@end
