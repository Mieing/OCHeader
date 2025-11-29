@class NSString;

@interface SREReportData : NSObject <PBCoding>

@property (nonatomic) unsigned int siriSessionId;
@property (nonatomic) unsigned int success;
@property (nonatomic) unsigned int siriOpCode;
@property (nonatomic) unsigned int receiverType;
@property (nonatomic) unsigned int matchStatus;
@property (nonatomic) unsigned int multiReceiverOpCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_siriSessionId;
+ (void)PBArrayAdd_success;
+ (void)PBArrayAdd_siriOpCode;
+ (void)PBArrayAdd_receiverType;
+ (void)PBArrayAdd_matchStatus;
+ (void)PBArrayAdd_multiReceiverOpCode;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
