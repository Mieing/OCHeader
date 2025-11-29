@class NSString, AWEMVChannelCardConfig, AWEURLModel;

@interface AWEMVChannelFeedLiveModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long liveStartTime;
@property (nonatomic) long long appointmentId;
@property (nonatomic) long long userId;
@property (retain, nonatomic) AWEURLModel *cover;
@property (nonatomic) long long paidType;
@property (nonatomic) BOOL hasSubscribed;
@property (nonatomic) long long ticketId;
@property (nonatomic) long long parentTicketId;
@property (copy, nonatomic) NSString *ticketSchema;
@property (nonatomic) long long paidRight;
@property (nonatomic) unsigned long long liveStatus;
@property (copy, nonatomic) NSString *replayString;
@property (nonatomic) BOOL isVS;
@property (retain, nonatomic) AWEMVChannelCardConfig *cardConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
