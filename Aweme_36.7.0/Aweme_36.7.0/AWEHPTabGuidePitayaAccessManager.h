@class NSMapTable;

@interface AWEHPTabGuidePitayaAccessManager : NSObject

@property (retain, nonatomic) NSMapTable *handlers;

+ (id)sharedInstance;

- (void)registerButtonShowTriggerHandler:(id)a0 enterFrom:(id)a1 awemeID:(id)a2;
- (void)startPitayaVerifyWithAwemeList:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
- (id)keyWithEnterFrom:(id)a0 awemeID:(id)a1;
- (id)p_generatePitayaRequestParamsWithList:(id)a0 enterFrom:(id)a1 version:(id)a2;
- (void)p_handlePitayaResponse:(id)a0 withAwemeList:(id)a1 enterFrom:(id)a2 version:(id)a3;
- (id)p_generatePitayaRequestParamsWithAweme:(id)a0 enterFrom:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
