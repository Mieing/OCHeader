@class NSString;

@interface FinderLiveAppMsgAudienceSubmitProductOrderInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned int listId;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) BOOL disabledGuide;
@property (nonatomic) BOOL disabledClickable;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *newContent;

+ (void)initialize;

@end
