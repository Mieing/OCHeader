@class NSError, WCBGStorage, NSString;

@interface WCCoverMasterStorageCGI : WCBaseCgi

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) WCBGStorage *bgStorage;
@property (nonatomic) BOOL usesOldDataForcibly;
@property (readonly, copy, nonatomic) NSString *language;
@property (copy, nonatomic) id /* block */ successHandler;
@property (copy, nonatomic) id /* block */ failureHandler;

- (id)initWithLanguage:(id)a0;
- (void)_createRequest;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
