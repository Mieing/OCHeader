@class NSString;

@interface WCFinderModFeedSettingCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long feedID;
@property (nonatomic) BOOL isSwitchOn;
@property (nonatomic) int settingScene;
@property (nonatomic) int oplogScene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *nonceID;

- (id)initWithFeedID:(unsigned long long)a0 nonceID:(id)a1 userName:(id)a2 isSwitchON:(BOOL)a3 settingScene:(int)a4 oplogScene:(int)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (id)defaultErrorMsg:(int)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
