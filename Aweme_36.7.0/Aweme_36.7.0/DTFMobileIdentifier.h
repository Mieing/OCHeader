@class NSString;

@interface DTFMobileIdentifier : NSObject

@property (copy, nonatomic) NSString *UTDID;
@property (copy, nonatomic) NSString *IMSI;
@property (copy, nonatomic) NSString *IMEI;
@property (copy, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *TID;
@property (copy, nonatomic) NSString *deviceFingerprint;
@property (readonly) NSString *AWID;
@property (readonly) NSString *clientId;
@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) unsigned long long memoryAwailable;
@property (readonly, nonatomic) int diskTotalSpace;

+ (void)load;
+ (id)shareIdentifier;

- (void).cxx_destruct;
- (id)init;

@end
