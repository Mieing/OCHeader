@class NSString, BDTuringVerifyModel;
@protocol BDTuringNoCaptchaDelegate, BDTuringUIHelperDelegate, BDTuringConfigDelegate, BDTuringLoginDelegate, BDTuringUCTwiceVerifyDelegate;

@interface BDTuringConfig : NSObject

@property (weak, nonatomic) BDTuringVerifyModel *model;
@property (weak, nonatomic) BDTuringVerifyModel *model;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appKey;
@property (nonatomic) long long regionType;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *locale;
@property (weak, nonatomic) id<BDTuringConfigDelegate> delegate;
@property (weak, nonatomic) id<BDTuringLoginDelegate> handler;
@property (weak, nonatomic) id<BDTuringUCTwiceVerifyDelegate> uctvHandler;
@property (weak, nonatomic) id<BDTuringNoCaptchaDelegate> noCaptchaHandler;
@property (weak, nonatomic) id<BDTuringUIHelperDelegate> uiHelperHandler;

+ (void)loadHostCN;
+ (void)initialize;

- (id)commonParameters;
- (id)sealRequestQueryParameters;
- (id)sealWebURLQueryParameters;
- (id)liveDetectRequestQueryParameters;
- (id)stringFromDelegateSelector:(SEL)a0;
- (id)commonWebURLQueryParameters;
- (id)turingWebURLQueryParameters;
- (id)twiceVerifyRequestQueryParameters;
- (id)requestPostParameters;
- (void).cxx_destruct;
- (id)init;
- (id)eventParameters;
- (id)requestQueryParameters;

@end
