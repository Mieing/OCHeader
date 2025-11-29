@class NSDictionary;

@interface AWEUserLoginProtocolModel : NSObject

@property (nonatomic) BOOL hasAgreedPrivacy;
@property (nonatomic) long long type;
@property (nonatomic) long long carrierType;
@property (retain, nonatomic) NSDictionary *trackInfo;

- (void).cxx_destruct;
- (id)init;

@end
