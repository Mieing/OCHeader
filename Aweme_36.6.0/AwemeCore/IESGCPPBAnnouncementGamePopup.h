@class NSString, NSMutableArray;

@interface IESGCPPBAnnouncementGamePopup : NSObject

@property (nonatomic) long long id_g;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long type;
@property (nonatomic) long long dailyLimit;
@property (nonatomic) long long totalLimit;
@property (nonatomic) long long priority;
@property (nonatomic) long long delayTime;
@property (retain, nonatomic) NSMutableArray *gamePopupContent;

- (void).cxx_destruct;

@end
