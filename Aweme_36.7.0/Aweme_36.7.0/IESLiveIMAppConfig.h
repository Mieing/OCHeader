@class NSString, NSNumber;
@protocol IESLiveIMDecoder;

@interface IESLiveIMAppConfig : IESLiveIMAppInfo

@property (copy, nonatomic) NSString *unifiedWsUrl;
@property (copy, nonatomic) NSString *unifiedHttpUrl;
@property (nonatomic) double unifiedMaxUnusedTime;
@property (nonatomic) BOOL unifiedSkipEmptyBody;
@property (retain, nonatomic) id<IESLiveIMDecoder> unifiedDecoder;
@property (nonatomic) BOOL shouldSetupByRegister;
@property (retain, nonatomic) NSNumber *liveId;
@property (copy, nonatomic) NSString *appLanguage;
@property (nonatomic) BOOL enableWS;

- (void).cxx_destruct;
- (id)init;

@end
