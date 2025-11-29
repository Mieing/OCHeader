@class NSString, SportRecord;

@interface likeItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int score;
@property (nonatomic) unsigned int ranknum;
@property (nonatomic) unsigned int likecount;
@property (nonatomic) unsigned int likestate;
@property (retain, nonatomic) SportRecord *sportrecord;

+ (void)initialize;

@end
