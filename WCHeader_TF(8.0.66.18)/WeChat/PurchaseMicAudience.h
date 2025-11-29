@class NSString, FinderLiveContact;

@interface PurchaseMicAudience : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *micSdkUserId;
@property (retain, nonatomic) FinderLiveContact *micContact;
@property (nonatomic) unsigned int totalAmountWecoin;
@property (retain, nonatomic) NSString *consultationContent;
@property (nonatomic) BOOL isOnline;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int micType;

+ (void)initialize;

@end
