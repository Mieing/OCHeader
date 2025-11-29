@class NSString;

@interface SprBgmSearchPageContext : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *keyWord;
@property (nonatomic) unsigned int miaojianOffset;
@property (nonatomic) BOOL miaojianHasNext;
@property (nonatomic) unsigned int sprrecOffset;
@property (nonatomic) BOOL sprrecHasNext;
@property (nonatomic) unsigned long long sprrecRecId;

+ (void)initialize;

@end
