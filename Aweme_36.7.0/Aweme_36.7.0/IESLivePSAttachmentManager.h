@class IESLivePublicScreenDataFlowManager, NSMutableDictionary, NSString, NSMutableSet, IESLivePublicScreenContext, IESLivePublicScreenView;

@interface IESLivePSAttachmentManager : NSObject <IESLivePSAttachmentService>

@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) NSMutableSet *availableTypesSet;
@property (retain, nonatomic) NSMutableDictionary *attachmentsMap;
@property (retain, nonatomic) NSMutableDictionary *mastersMap;
@property (retain, nonatomic) NSMutableDictionary *protocolMap;
@property (weak, nonatomic) IESLivePublicScreenView *publicScreenView;
@property (weak, nonatomic) IESLivePublicScreenDataFlowManager *dataFlowManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerMaster:(id)a0 forAttachmentWithType:(id)a1;
- (void)detachAttachmentWithType:(id)a0;
- (id)getAttachmentFromProtocol:(id)a0;
- (BOOL)attachAttachmentWithType:(id)a0;
- (BOOL)checkAttachmentAvailableWithType:(id)a0;
- (id)initWithPublicScreenContext:(id)a0 availableTypeArray:(id)a1;
- (void)availAttachmentWithType:(id)a0 needAttachImmediately:(BOOL)a1;
- (void)banAttachmentWithType:(id)a0 needDetachImmediately:(BOOL)a1;
- (void).cxx_destruct;

@end
