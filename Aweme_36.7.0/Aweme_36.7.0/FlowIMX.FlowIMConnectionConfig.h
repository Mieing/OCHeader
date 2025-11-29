@class NSString, NSDictionary, NSArray;

@interface FlowIMX.FlowIMConnectionConfig : NSObject {
    void /* unknown type, empty encoding */ platform;
    void /* function */ appKey;
    void /* function */ customParams;
    void /* function */ customHeaders;
    void /* function */ urls;
}

@property (nonatomic) int appId;
@property (nonatomic) int fpid;
@property (nonatomic) long long deviceId;
@property (nonatomic) int appVersion;
@property (nonatomic, copy) NSString *appKey;
@property (nonatomic, copy) NSDictionary *customParams;
@property (nonatomic, copy) NSDictionary *customHeaders;
@property (nonatomic, copy) NSArray *urls;

- (id)ttPushConfig;
- (void).cxx_destruct;
- (id)init;

@end
