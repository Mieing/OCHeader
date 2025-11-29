@class NSString, AWESearchViewController, NSMutableDictionary, UIViewController;
@protocol AWESearchScanVCProtocol;

@interface AWESearchSessionIDManager : NSObject

@property (copy, nonatomic) NSString *searchSessionID;
@property (weak, nonatomic) AWESearchViewController *firstSearchVC;
@property (weak, nonatomic) UIViewController<AWESearchScanVCProtocol> *firstScanVC;
@property (nonatomic) BOOL sessionIDDidUpdate;
@property (retain, nonatomic) NSMutableDictionary *sessionIDMap;
@property (copy, nonatomic) NSString *coldStartSessionID;
@property (nonatomic) BOOL coldIdDidUpdateByOnly;
@property (nonatomic) BOOL isInSameSession;

+ (id)sharedInstance;

- (void)onlyUpdateSessionID;
- (BOOL)shouldUpdateSessionID;
- (void)updateSessionID;
- (void)updateSessionIDWithSearchVC:(id)a0;
- (void)resetDidUpdateFlag;
- (void)onlyUpdateSessionIDWithIdentifier:(id)a0;
- (void)updateSessionIDWithSearchScanVC:(id)a0;
- (BOOL)isInColdStartSession;
- (BOOL)hasColdStartSessionId;
- (void).cxx_destruct;

@end
