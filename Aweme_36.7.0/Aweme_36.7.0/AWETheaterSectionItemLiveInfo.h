@class NSString;

@interface AWETheaterSectionItemLiveInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *roomRawData;
@property (copy, nonatomic) NSString *episodeRawData;
@property (nonatomic) BOOL isAppointment;
@property (nonatomic) long long appointmentID;
@property (nonatomic) long long ticketID;
@property (nonatomic) long long parentTicketID;
@property (copy, nonatomic) NSString *ticketText;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *startTimeText;
@property (nonatomic) long long liveStatus;
@property (nonatomic) long long userID;
@property (copy, nonatomic) NSString *ticketSchema;
@property (nonatomic) long long paidType;
@property (nonatomic) long long paidRight;
@property (nonatomic) BOOL isVS;
@property (copy, nonatomic) NSString *deleteLiveID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playletInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
