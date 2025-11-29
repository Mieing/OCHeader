@class NSData, NSString, WCFinderContact;

@interface WCFinderLivePurchaseApplyMicParam : NSObject

@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int applyType;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int coinAmount;
@property (nonatomic) BOOL usingVideo;
@property (retain, nonatomic) WCFinderContact *toFinderContact;
@property (nonatomic) BOOL isAnonymous;
@property (retain, nonatomic) NSString *consultContent;

- (void).cxx_destruct;

@end
