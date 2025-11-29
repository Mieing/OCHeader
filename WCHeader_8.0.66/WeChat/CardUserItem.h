@class NSString;

@interface CardUserItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardId;
@property (nonatomic) unsigned long long updateSequence;
@property (nonatomic) unsigned int stateFlag;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned int status;

+ (void)initialize;

@end
