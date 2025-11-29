@class NSString;

@interface LynxCardStructV2 : GPBMessage

@property (nonatomic) BOOL isLynxCard;
@property (nonatomic) BOOL hasIsLynxCard;
@property (nonatomic) int cardType;
@property (nonatomic) BOOL hasCardType;
@property (copy, nonatomic) NSString *lynxParams;
@property (nonatomic) BOOL hasLynxParams;

+ (id)descriptor;

@end
