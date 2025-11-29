@class NSString, NSMutableDictionary;

@interface AWEPrivacyKitThreadInfoUtil : NSObject <AWEPrivacyKitThreadInfoService, TMThreadInfoDelivery>

@property (retain, nonatomic) NSMutableDictionary *queueWhiteList;
@property (retain, nonatomic) NSMutableDictionary *skipThreadClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setCertToThread:(id)a0 forKey:(id)a1;
+ (void)removeCertFromThread:(id)a0 forKey:(id)a1;
+ (void)setInfo:(id)a0 withKey:(id)a1;
+ (id)sharedInstance;
+ (id)getInfo:(id)a0;
+ (void)removeInfo:(id)a0;

- (BOOL)shouldSkipForQueue:(id)a0;
- (BOOL)shouldSkip;
- (void)addQueueToWhiteList:(id)a0;
- (void)addSkipThread:(id)a0;
- (void).cxx_destruct;

@end
