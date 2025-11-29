@class AWELivePlaybackTicketSession;

@interface AWELivepaidLive : AWEBaseApiModel

@property (nonatomic) long long paidType;
@property (nonatomic) long long viewRight;
@property (nonatomic) double maxTrialDuration;
@property (retain, nonatomic) AWELivePlaybackTicketSession *ticketSession;
@property (nonatomic) BOOL delivery;

+ (id)ticketSessionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
