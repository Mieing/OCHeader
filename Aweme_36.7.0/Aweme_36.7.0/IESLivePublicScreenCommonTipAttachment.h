@class NSString, IESLivePSComponentConfigModel, IESLivePublicScreenCommonMessageParser, IESLivePublicScreenContext, HTSEventContext, IESLivePublicScreenView;

@interface IESLivePublicScreenCommonTipAttachment : NSObject <HTSLiveMessageSubscriber, IESLiveDataSyncDelegate, IESLivePSCommonAttachmentProtocol>

@property (retain, nonatomic) IESLivePSComponentConfigModel *riskAdviseModel;
@property (retain, nonatomic) IESLivePublicScreenCommonMessageParser *messageParser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESLivePublicScreenView *publicScreenView;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didAttach;
@property (copy, nonatomic) id /* block */ didDetach;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)didSetAttachingDIContext;
- (BOOL)shouldActive;
- (void)loadImageForDisplayText:(id)a0 completion:(id /* block */)a1;
- (id)abilityProtocol;
- (void)handleRiskAdvise:(id)a0;
- (void)handlePlatformAdvise:(id)a0;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;
- (void)messageReceived:(id)a0;

@end
