@class NSString;

@interface HearingAidSessionId : NSObject

@property (retain, nonatomic) NSString *data;

+ (id)sharedInstance;

- (id)getHearingAidSessionID;
- (void)clearHearingAidSession;
- (void).cxx_destruct;

@end
