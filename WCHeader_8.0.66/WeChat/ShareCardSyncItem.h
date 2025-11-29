@class NSString;

@interface ShareCardSyncItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardId;
@property (nonatomic) unsigned int stateFlag;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned long long seq;

+ (void)initialize;

@end
