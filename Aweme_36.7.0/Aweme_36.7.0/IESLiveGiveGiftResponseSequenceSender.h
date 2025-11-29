@class IESLiveGiftPanelDataSharing, NSString, IESLiveGiveGiftTransaction;
@protocol IESLiveGiveGiftSequenceSenderDataSource, IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiveGiftResponseSequenceSender : NSObject <IESLiveGiveGiftSequenceSenderProtocol>

@property (nonatomic) BOOL running;
@property (weak, nonatomic) IESLiveGiveGiftTransaction *transaction;
@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (weak, nonatomic) id<IESLiveGiveGiftSequenceSenderDataSource> dataSource;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loop:(id)a0;
- (id)getfirstSendSuccFromGiftPanelTimeIntervalStr;
- (void).cxx_destruct;
- (void)stop;
- (void)endTransaction:(BOOL)a0;
- (void)run;

@end
