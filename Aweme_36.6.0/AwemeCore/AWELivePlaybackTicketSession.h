@class NSString;

@interface AWELivePlaybackTicketSession : AWEBaseApiModel

@property (nonatomic) long long ticketSessionID;
@property (copy, nonatomic) NSString *ticketSessionIDStr;
@property (copy, nonatomic) NSString *ticketPanelSixJumpUrl;
@property (nonatomic) long long ticketCategory;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
