@class NSString;

@interface FinderMemberSearchInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *authorUrl;
@property (retain, nonatomic) NSString *authorNickname;
@property (nonatomic) unsigned int replyNum;
@property (nonatomic) unsigned long long postTime;
@property (nonatomic) unsigned long long feedId;
@property (nonatomic) unsigned int authorType;

+ (void)initialize;

@end
