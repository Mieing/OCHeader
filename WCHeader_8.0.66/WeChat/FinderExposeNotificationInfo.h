@class NSString;

@interface FinderExposeNotificationInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) unsigned long long endTs;

+ (void)initialize;

- (void)setEndTs:(unsigned long long)a0;
- (unsigned long long)endTs;
- (void)setSeq:(unsigned long long)a0;
- (unsigned long long)seq;
- (void)setContent:(id)a0;
- (id)content;

@end
