@class NSString;

@interface WCFinderFansProfileVCDelegateImpl : NSObject <WCFinderFansProfileViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)currentWxUsername:(id)a0;

- (void)fansProfileViewController:(id)a0 clickFinderActionWithWXUsername:(id)a1;
- (void)fansProfileViewController:(id)a0 clickActionWithContact:(id)a1 finderContact:(id)a2 type:(unsigned long long)a3;
- (void)fansProfileViewController:(id)a0 clickControlWithContact:(id)a1 finderContact:(id)a2 type:(unsigned long long)a3;
- (void)fansProfileViewController:(id)a0 clickPrivateMsgWithContact:(id)a1 finderContact:(id)a2 comment:(id)a3;
- (void)handleFinderPrivateMsgWithFansVC:(id)a0 clickPrivateMsgWithContact:(id)a1 finderContact:(id)a2;

@end
