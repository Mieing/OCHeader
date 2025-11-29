@class AWELiveAsyncAuthData, AWELiveTicketModel, NSDictionary, AWELivePrivilegeInfo;

@interface AWELivePaidLiveModel : AWEBaseApiModel

@property (nonatomic) unsigned long long paidType;
@property (nonatomic) unsigned long long viewRight;
@property (nonatomic) long long duration;
@property (nonatomic) long long maxPreviewDuration;
@property (retain, nonatomic) AWELiveTicketModel *ticketSession;
@property (nonatomic) unsigned long long delivery;
@property (nonatomic) BOOL needDeliveryNotice;
@property (copy, nonatomic) NSDictionary *privilegeInfoMap;
@property (readonly, nonatomic) AWELivePrivilegeInfo *vipSubscribePrivilegeInfo;
@property (retain, nonatomic) AWELiveAsyncAuthData *asyncAuthData;

+ (id)ticketSessionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
