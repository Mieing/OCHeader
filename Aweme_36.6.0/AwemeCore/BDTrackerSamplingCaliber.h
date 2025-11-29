@class NSString;

@interface BDTrackerSamplingCaliber : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *bd_did;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) long long didnum;
@property (nonatomic) long long crc32Did;
@property (nonatomic) unsigned long long cityHashDid;
@property (nonatomic) unsigned long long cityHashUuid;

- (unsigned long long)cityHash:(id)a0;
- (void).cxx_destruct;
- (unsigned int)random;

@end
