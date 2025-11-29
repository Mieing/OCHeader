@class NSDictionary, NSString, NSError;

@interface BDLLightLocationResult : NSObject

@property (nonatomic) long long status;
@property (retain, nonatomic) NSDictionary *lastLocationResult;
@property (retain, nonatomic) NSString *currentWifiResult;
@property (nonatomic) long long accuracy;
@property (retain, nonatomic) NSError *error;

- (id)initWithStatus:(long long)a0 accuracy:(long long)a1 locationResult:(id)a2 wifiResult:(id)a3 error:(id)a4;
- (void).cxx_destruct;

@end
