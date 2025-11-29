@class NSString;

@interface IESGCPBTMService_Douyin : NSObject <IESGCPBTMService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)registerBtmPage:(id)a0 params:(id /* block */)a1;
- (void)forwardToCustomPage:(id)a0;
- (void)returnFromCustomPage:(id)a0;
- (void)appendBcmPageParams:(id)a0 forKey:(id)a1 responder:(id)a2;
- (id)createJumpSourceBtmTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2;
- (id)createJumpSourceBtmTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2 options:(id)a3;
- (BOOL)registerBtmPage:(id)a0 pageBtm:(id)a1 sourceBtmToken:(id)a2;
- (id)createReportParamsWithBtm:(id)a0 host:(id)a1;
- (id)createReportParamsWithBtm:(id)a0 host:(id)a1 options:(id)a2;
- (BOOL)setBcmPageParams:(id)a0 host:(id)a1 clearOldValue:(BOOL)a2;

@end
