@class NSString;

@interface WCPreGiftCardData : MMObject

@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *fromUserHeadImgUrl;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *buttonWording;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) BOOL ignore;
@property (retain, nonatomic) NSString *packageUrl;
@property (retain, nonatomic) NSString *buttonColor;
@property (retain, nonatomic) NSString *outOfCardWording;
@property (retain, nonatomic) NSString *seeOtherWording;
@property (nonatomic) unsigned int bizUin;
@property (retain, nonatomic) NSString *orderId;

- (void).cxx_destruct;

@end
