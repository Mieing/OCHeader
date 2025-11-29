@class NSString, FinderLiveContact;

@interface NewAnchorPkInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveContact *contact;
@property (retain, nonatomic) NSString *sdkUserId;
@property (nonatomic) unsigned int sdkLiveId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long anchorPkExtFlag;

+ (void)initialize;

@end
