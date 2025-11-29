@class NSString, NSDate;

@interface AWEMaskPhoneModel : NSObject <NSCoding>

@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *number;
@property (nonatomic) long long carrier;
@property (retain, nonatomic) NSDate *requestTime;
@property (retain, nonatomic) NSString *errorMessage;
@property (nonatomic) long long retryCount;
@property (nonatomic) double lastSuccessPreRequestTime;

- (id)initWithScene:(id)a0 number:(id)a1 carrier:(long long)a2 requestTime:(id)a3 errorMessage:(id)a4 retryCount:(long long)a5;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
