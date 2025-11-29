@class NSString, MMUIViewController, WCFinderOpenIMInfo;

@interface WCFinderWecomAddFriendAssist : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) MMUIViewController *vc;
@property (retain, nonatomic) WCFinderOpenIMInfo *info;
@property (copy, nonatomic) NSString *failTip;

+ (id)openOpenImContactInfo:(id)a0 openIMInfo:(id)a1 storeByVC:(id)a2 failTip:(id)a3;
+ (id)openOpenImContactInfo:(id)a0 storeByVC:(id)a1 failTip:(id)a2;
+ (id)openOpenImContactInfo:(id)a0 storeByVC:(id)a1;

- (void)startSearchCGI:(id)a0 openIMInfo:(id)a1;
- (void)handleSearchOpenIMContactResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onContactSearchLogicDone:(id)a0 FromScene:(unsigned int)a1;
- (void)onContactSearchLogicFail:(id)a0;
- (void)removeFromDisposeBag;
- (void).cxx_destruct;

@end
