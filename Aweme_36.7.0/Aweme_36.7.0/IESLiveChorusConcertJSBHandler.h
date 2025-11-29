@class IESLivePartyKTVChorusApi, NSMutableDictionary, NSString;

@interface IESLiveChorusConcertJSBHandler : NSObject <IESLiveChorusConcertJSBService, IESLiveChorusConcertDataSource>

@property (retain, nonatomic) NSMutableDictionary *handlerDict;
@property (retain, nonatomic) IESLivePartyKTVChorusApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *chorusId;
@property (nonatomic) long long userType;
@property (nonatomic) long long chorusState;

- (void)didSetAttachingDIContext;
- (id)initWithBizIds:(id)a0 delegate:(id)a1;
- (void)loadHandlerWithBizIds:(id)a0 delegate:(id)a1;
- (void)leaveChorusIfNeeded;
- (void)updateChorusStatus:(id)a0 type:(id)a1 extra:(id)a2 completion:(id /* block */)a3;
- (void)getChorusStatus:(id)a0 type:(id)a1 extra:(id)a2 completion:(id /* block */)a3;
- (id)chorusStateSignal;
- (void).cxx_destruct;
- (void)dealloc;

@end
