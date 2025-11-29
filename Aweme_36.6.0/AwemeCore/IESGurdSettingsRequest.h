@class NSString;

@interface IESGurdSettingsRequest : NSObject

@property (retain, nonatomic) NSString *version;
@property (nonatomic) long long requestType;

+ (id)request;

- (id)logInfo;
- (id)paramsForRequest;
- (void).cxx_destruct;
- (id)init;

@end
