@class FinderContact, NSString, FinderTabTipsDSLRenderTmpl;

@interface FinderMemberCard : WXPBGeneratedMessage

@property (retain, nonatomic) FinderContact *contact;
@property (retain, nonatomic) NSString *membershipZoneTitle;
@property (nonatomic) unsigned int memberStatus;
@property (nonatomic) unsigned long long expireTime;
@property (retain, nonatomic) FinderTabTipsDSLRenderTmpl *dslRender;

+ (void)initialize;

@end
