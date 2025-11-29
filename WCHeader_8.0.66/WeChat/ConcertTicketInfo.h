@class NSString, ConcertTicketInfo_MessageCardItem, FinderJumpInfo, NSMutableArray, FinderLiveContact;

@interface ConcertTicketInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *activityId;
@property (nonatomic) unsigned long long startTime;
@property (retain, nonatomic) NSString *location;
@property (nonatomic) BOOL hasReceived;
@property (retain, nonatomic) FinderLiveContact *contact;
@property (nonatomic) unsigned long long ticketUniqId;
@property (retain, nonatomic) NSString *seatNo;
@property (retain, nonatomic) NSString *jumpUrl;
@property (nonatomic) BOOL isPay;
@property (nonatomic) unsigned int price;
@property (retain, nonatomic) NSMutableArray *pageItemList;
@property (retain, nonatomic) NSString *resourceId;
@property (retain, nonatomic) NSMutableArray *resourceInfoList;
@property (nonatomic) BOOL enableSwitchTicket;
@property (retain, nonatomic) NSString *ticketAnchorLineContent;
@property (retain, nonatomic) ConcertTicketInfo_MessageCardItem *msgCardItem;
@property (retain, nonatomic) FinderJumpInfo *lotteryJumpInfo;

+ (void)initialize;

- (void)setLotteryJumpInfo:(id)a0;
- (id)lotteryJumpInfo;
- (void)setMsgCardItem:(id)a0;
- (id)msgCardItem;
- (void)setTicketAnchorLineContent:(id)a0;
- (id)ticketAnchorLineContent;
- (void)setEnableSwitchTicket:(BOOL)a0;
- (BOOL)enableSwitchTicket;
- (void)setResourceInfoList:(id)a0;
- (id)resourceInfoList;
- (void)setResourceId:(id)a0;
- (id)resourceId;
- (void)setPageItemList:(id)a0;
- (id)pageItemList;
- (void)setPrice:(unsigned int)a0;
- (unsigned int)price;
- (void)setIsPay:(BOOL)a0;
- (BOOL)isPay;
- (void)setJumpUrl:(id)a0;
- (id)jumpUrl;
- (void)setSeatNo:(id)a0;
- (id)seatNo;
- (void)setTicketUniqId:(unsigned long long)a0;
- (unsigned long long)ticketUniqId;
- (void)setContact:(id)a0;
- (id)contact;
- (void)setHasReceived:(BOOL)a0;
- (BOOL)hasReceived;
- (void)setLocation:(id)a0;
- (id)location;
- (void)setStartTime:(unsigned long long)a0;
- (unsigned long long)startTime;
- (void)setActivityId:(id)a0;
- (id)activityId;

@end
