@class NSString, NSMutableDictionary;

@interface MMGameLiveLaunchModel : NSObject

@property (retain, nonatomic) NSString *gameAppId;
@property (nonatomic) int opensdkVersion;
@property (nonatomic) unsigned long long ticketExpiredTime;
@property (retain, nonatomic) NSMutableDictionary *gameLiveExtInfo;
@property (retain, nonatomic) NSString *ticket;

- (void).cxx_destruct;

@end
