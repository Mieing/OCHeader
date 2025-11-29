@class NSString;

@interface IESGCPPeakStatusReq : NSObject

@property (copy, nonatomic) NSString *supplierName;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *deviceId;
@property (nonatomic, getter=isPeakTime) BOOL peakTime;
@property (copy, nonatomic) NSString *prodId;
@property (copy, nonatomic) NSString *planName;
@property (copy, nonatomic) NSString *cgUserType;
@property (copy, nonatomic) NSString *gpInitLogId;

- (void).cxx_destruct;

@end
