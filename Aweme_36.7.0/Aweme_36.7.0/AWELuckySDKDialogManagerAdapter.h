@class NSString, NSMutableDictionary;

@interface AWELuckySDKDialogManagerAdapter : NSObject <BDUGHostDialogManagerProtocol, BDUGHostMessageManagerProtocol>

@property (class, readonly, nonatomic) NSMutableDictionary *popupsConverted;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraServiceProtocols;
+ (BOOL)showDialog:(id)a0 withPriority:(long long)a1 showDialog:(id /* block */)a2 forceHide:(id /* block */)a3 extra:(id)a4;
+ (void)finishDialog:(id)a0;
+ (BOOL)enableLuckyStandardPopup;
+ (void)finishMessage:(id)a0;
+ (BOOL)showMessage:(id)a0 withPriority:(long long)a1 showMessage:(id /* block */)a2 forceHide:(id /* block */)a3 extra:(id)a4;
+ (BOOL)isFeedActivityShowing;
+ (id)sharedInstance;
+ (id)serviceProtocol;


@end
