@class NSDictionary, NSString;

@interface JSLauchMiniProgramParam : NSObject

@property (retain, nonatomic) NSDictionary *dictLastAppInfo;
@property (retain, nonatomic) NSString *gameLiveInfoOfReferInfo;
@property (retain, nonatomic) id referrerData;
@property (retain, nonatomic) id privateReferrerData;
@property (retain, nonatomic) NSDictionary *halfScreenParam;
@property (nonatomic) long long scene;

- (void).cxx_destruct;

@end
