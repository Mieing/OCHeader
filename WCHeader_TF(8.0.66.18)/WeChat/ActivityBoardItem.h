@class LiveContact;

@interface ActivityBoardItem : WXPBGeneratedMessage

@property (retain, nonatomic) LiveContact *contact;
@property (nonatomic) unsigned long long amount;
@property (nonatomic) unsigned int rankingPos;

+ (void)initialize;

@end
