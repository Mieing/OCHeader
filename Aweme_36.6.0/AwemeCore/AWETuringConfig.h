@class NSString, BDTuringConfig;
@protocol BDTuringUCTwiceVerifyDelegate, BDTuringUIHelperDelegate, BDTuringLoginDelegate, BDTuringNoCaptchaDelegate;

@interface AWETuringConfig : NSObject

@property (retain, nonatomic) BDTuringConfig *turingConfig;
@property (nonatomic) long long regionType;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *channel;
@property (retain, nonatomic) NSString *appName;
@property (weak, nonatomic) id<BDTuringLoginDelegate> loginHandler;
@property (weak, nonatomic) id<BDTuringUCTwiceVerifyDelegate> uctvHandler;
@property (weak, nonatomic) id<BDTuringNoCaptchaDelegate> noCaptchaHandler;
@property (weak, nonatomic) id<BDTuringUIHelperDelegate> uiHelperHandler;

+ (id)configWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBlock:(id /* block */)a0;

@end
