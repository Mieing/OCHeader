@class FinderContact, NSString;

@interface FinderSearchInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderContact *contact;
@property (retain, nonatomic) NSString *highlightNickname;
@property (retain, nonatomic) NSString *highlightSignature;
@property (nonatomic) unsigned int fansCount;
@property (nonatomic) unsigned int friendFollowCount;
@property (retain, nonatomic) NSString *highlightProfession;

+ (void)initialize;

@end
