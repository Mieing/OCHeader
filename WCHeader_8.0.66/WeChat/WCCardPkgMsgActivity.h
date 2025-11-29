@class NSString;

@interface WCCardPkgMsgActivity : NSObject

@property (nonatomic) unsigned int activityType;
@property (retain, nonatomic) NSString *activityText;
@property (retain, nonatomic) NSString *activityUrl;
@property (nonatomic) unsigned int activityEndTime;

- (BOOL)IsActivityValid;
- (void).cxx_destruct;

@end
