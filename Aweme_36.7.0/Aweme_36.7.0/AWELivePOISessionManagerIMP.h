@class NSString;

@interface AWELivePOISessionManagerIMP : NSObject <IESLivePOISessionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)storeInfoInSession:(id)a0 info:(id)a1;
- (id)startSession;

@end
