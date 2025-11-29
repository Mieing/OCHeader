@class NSString;
@protocol BDWebSecSettingDelegate;

@interface BDWebSecSettingManager : NSObject <BDWebSecSettingDelegate>

@property (class, retain, nonatomic) id<BDWebSecSettingDelegate> settingsDelegate;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldForceHttpsForURL:(id)a0;
+ (BOOL)canProxy2Delegate:(SEL)a0;
+ (BOOL)bdForceHttpsRequest;


@end
