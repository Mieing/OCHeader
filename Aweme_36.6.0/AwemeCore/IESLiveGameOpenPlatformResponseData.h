@class NSString, NSDictionary;

@interface IESLiveGameOpenPlatformResponseData : NSObject

@property (readonly, nonatomic) long long statusCode;
@property (readonly, copy, nonatomic) NSString *statusMessage;
@property (readonly, copy, nonatomic) NSDictionary *data;
@property (readonly, nonatomic) id responseData;

- (void).cxx_destruct;
- (id)initWithResponseData:(id)a0;

@end
