@class NSString;

@interface FeedCardSubscribeCardTypeConfig : GPBMessage

@property (copy, nonatomic) NSString *cardType;
@property (nonatomic) BOOL hasCardType;
@property (copy, nonatomic) NSString *cardIcon;
@property (nonatomic) BOOL hasCardIcon;
@property (copy, nonatomic) NSString *cardName;
@property (nonatomic) BOOL hasCardName;

+ (id)descriptor;

@end
