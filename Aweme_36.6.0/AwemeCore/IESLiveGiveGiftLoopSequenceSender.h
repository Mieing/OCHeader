@class HTSLiveGiftItem, NSString, IESLiveGiftPanelDataSharing, IESLiveGiveGiftTransaction;
@protocol IESLiveGiveGiftSequenceSenderDataSource, IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiveGiftLoopSequenceSender : NSObject <IESLiveGiveGiftSequenceSenderProtocol>

@property (nonatomic) long long groupCount;
@property (retain, nonatomic) IESLiveGiveGiftTransaction *transaction;
@property (retain, nonatomic) HTSLiveGiftItem *gift;
@property (weak, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (weak, nonatomic) id<IESLiveGiveGiftSequenceSenderDataSource> dataSource;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraTrackParams;
- (id)initWithGift:(id)a0 groupCount:(long long)a1;
- (void).cxx_destruct;
- (void)endTransaction:(BOOL)a0;
- (void)run;

@end
