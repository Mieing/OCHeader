@class NSDictionary, NSString;

@interface WXKeyBoardTipsExposeConfig : NSObject

@property (nonatomic) unsigned int configMask;
@property (nonatomic) unsigned int exposeEnable;
@property (nonatomic) unsigned int clickToExitCount;
@property (nonatomic) unsigned int exposeDays;
@property (nonatomic) unsigned int exposeInterval;
@property (nonatomic) unsigned int exposeCount;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSDictionary *wording;
@property (retain, nonatomic) NSString *swiperId;

- (void).cxx_destruct;

@end
