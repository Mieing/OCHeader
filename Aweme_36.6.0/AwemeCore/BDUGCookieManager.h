@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface BDUGCookieManager : NSObject {
    NSString *_validKey;
    NSString *_actToken;
    NSString *_actBase;
    NSString *_actData;
    NSArray *_activityInfos;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cookieQueue;
@property (copy, nonatomic) NSString *actToken;
@property (copy, nonatomic) NSArray *activityInfos;
@property (copy, nonatomic) NSString *actBase;
@property (copy, nonatomic) NSString *actData;
@property BOOL loginAtOtherApps;
@property (copy, nonatomic) NSString *validKey;

+ (id)sharedInstance;

- (void)setApiReturnIsLogin:(BOOL)a0;
- (BOOL)isLoginInOtherApps;
- (void)clearInvalidTokenWithKeys:(id)a0;
- (void)updateCookieWithActCommon:(id)a0;
- (id)getActToken;
- (id)commonGetParams;
- (id)commonPostParams;
- (id)getActivityInfos;
- (void)cleanCookie;
- (void).cxx_destruct;
- (id)init;

@end
