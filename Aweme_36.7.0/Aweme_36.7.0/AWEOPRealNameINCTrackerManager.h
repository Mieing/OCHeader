@class NSString;

@interface AWEOPRealNameINCTrackerManager : NSObject

@property (retain, nonatomic) NSString *clientKey;
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *clientAppType;

+ (id)shareManager;

- (id)commonParams;
- (void)reportAuthRealInfoPopupResult:(long long)a0 errorCode:(long long)a1 errMsg:(id)a2;
- (void)initWithClientKey:(id)a0 ClientName:(id)a1 ClientAppType:(id)a2;
- (void)reportAuthRealInfoPopupShow:(id)a0;
- (void)reportAuthRealInfoPopupClick:(id)a0 buttonType:(id)a1;
- (void).cxx_destruct;

@end
