@class NSString, NSDictionary;

@interface TTAAuthChangeBindRequestModel : NSObject

@property (nonatomic) long long platformType;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *platformAppId;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *profileKey;
@property (copy, nonatomic) NSString *verifyType;
@property (copy, nonatomic) NSString *verifiedTicket;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;
- (id)init;

@end
