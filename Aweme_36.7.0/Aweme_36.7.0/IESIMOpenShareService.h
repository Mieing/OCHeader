@class NSString;

@interface IESIMOpenShareService : HTSService <IESIMOpenShareService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getInvokeGameInfoWithSecUid:(id)a0 roomId:(id)a1 gameId:(id)a2 completion:(id /* block */)a3;

@end
