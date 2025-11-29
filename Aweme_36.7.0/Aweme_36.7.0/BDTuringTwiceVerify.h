@class NSString, BDTuringConfig, BDTuringSettings;
@protocol BDTuringTwiceVerifyHandler, BDTuringUCTwiceVerifyDelegate;

@interface BDTuringTwiceVerify : NSObject <BDTuringService, BDTuringVerifyHandler>

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *serviceName;
@property (retain, nonatomic) BDTuringSettings *settings;
@property (copy, nonatomic) id /* block */ callBack;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) BDTuringConfig *config;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) id<BDTuringTwiceVerifyHandler> handler;
@property (retain, nonatomic) id<BDTuringUCTwiceVerifyDelegate> uctvHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)twiceVerifyWithConfig:(id)a0;
+ (id)twiceVerifyWithAppID:(id)a0;
+ (void)initialize;

- (void)popVerifyViewWithModel:(id)a0;
- (void)startWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)bdturingUCTwiceVerifyWithCallback:(id)a0 callback:(id /* block */)a1;
- (void)collectUCTVStartEvent;
- (void)collectUCTVEndEvent:(long long)a0 params:(id)a1;
- (void)popVerifyViewWithModel:(id)a0 callback:(id /* block */)a1;
- (void)requestVerifyAuthResultWithDomain:(id)a0 params:(id)a1 complete:(id /* block */)a2;
- (void)dispatchVerifyDecision:(id)a0 type:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
