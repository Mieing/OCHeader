@class NSString, HTSLiveText, HTSLiveUser;

@interface HTSLiveLinkmicQuickInteract : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *sendGiftUser;
@property (nonatomic) BOOL hasSendGiftUser;
@property (nonatomic) long long thanksCarouselDuration;
@property (copy, nonatomic) NSString *thanksContent;
@property (copy, nonatomic) NSString *receiveGiftUserId;
@property (nonatomic) int interactType;
@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
