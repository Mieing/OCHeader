@class NSString;
@protocol BDUGTwiceVerifyDelegate;

@interface BDUGTwiceVerify : NSObject

@property (copy, nonatomic) id /* block */ callBack;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *appid;
@property (weak, nonatomic) id<BDUGTwiceVerifyDelegate> delegate;

+ (id)sharedInstance;

- (void)startWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)openAuthVerifyFinishWithParams:(id)a0 authParmas:(id)a1 error:(id)a2;
- (void)openLiveAuthFinishWithParams:(id)a0 error:(id)a1;
- (void)requestVerifyAuthResultWithDomain:(id)a0 params:(id)a1 complete:(id /* block */)a2;
- (void).cxx_destruct;

@end
