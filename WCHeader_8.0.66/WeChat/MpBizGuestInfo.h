@class NSString;

@interface MpBizGuestInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *feedUrl;
@property (nonatomic) unsigned int itemShowType;

+ (void)initialize;

- (void)setItemShowType:(unsigned int)a0;
- (unsigned int)itemShowType;
- (void)setFeedUrl:(id)a0;
- (id)feedUrl;

@end
