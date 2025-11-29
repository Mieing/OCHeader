@class NSDictionary, IESLiveGameOpenPlatformResponseData;

@interface IESLiveGameOpenPlatformResponse : NSObject

@property (readonly, nonatomic) long long httpCode;
@property (readonly, copy, nonatomic) NSDictionary *allHeaderFields;
@property (readonly, nonatomic) IESLiveGameOpenPlatformResponseData *responseData;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0 data:(id)a1;

@end
