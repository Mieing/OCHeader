@class NSString;

@interface IESLiveGameCPURLSchemaServiceImpl : NSObject <IESGCPLiveURLSchemaService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canOpenURL:(id)a0 fromInside:(BOOL)a1;
- (void)openURL:(id)a0 fromInside:(BOOL)a1 userInfo:(id)a2 openResult:(id /* block */)a3;

@end
