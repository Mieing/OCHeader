@class NSString, NSDictionary;

@interface WCLabsEntryTipsConfigItem : NSObject

@property (retain, nonatomic) NSString *appScheme;
@property (retain, nonatomic) NSString *packetName;
@property (nonatomic) int priority;
@property (retain, nonatomic) NSDictionary *wording;
@property (retain, nonatomic) NSString *swiperId;
@property (retain, nonatomic) NSDictionary *extInfo;

- (void).cxx_destruct;

@end
