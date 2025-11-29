@class NSString, NSNumber;

@interface ZDeviceInfo : NSObject

@property (retain, nonatomic) NSString *apdidToken;
@property (retain, nonatomic) NSString *wWORKSPACEID;
@property (nonatomic) NSNumber *isSecuritySDKNumber;

+ (id)getInstance;

- (BOOL)isTrackingAuthorization;
- (id)securityVersion;
- (void)ActivityTokenWithParam:(id)a0;
- (void)ActivityToken;
- (id)getTokenContent;
- (BOOL)isDeepSec;
- (void)deepSecActivityTokenWithParam:(id)a0;
- (void)avengersActivityTokenWithParam:(id)a0;
- (id)ApperceptRiskwith:(long long)a0 extParams:(id)a1;
- (BOOL)isSecuritySDKCompatible;
- (id)getSecurityChannel;
- (BOOL)securitySDKSupportDeepSec;
- (void).cxx_destruct;
- (id)init;

@end
