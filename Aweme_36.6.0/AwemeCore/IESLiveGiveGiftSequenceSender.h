@class IESLiveGiftPanelDataSharing;
@protocol IESLiveGiveGiftSequenceSenderProtocol, IESLiveGiveGiftSequenceSenderDataSource;

@interface IESLiveGiveGiftSequenceSender : NSObject

@property (retain, nonatomic) id<IESLiveGiveGiftSequenceSenderProtocol> responseSequenceSender;
@property (weak, nonatomic) id<IESLiveGiveGiftSequenceSenderDataSource> dataSource;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;
@property (nonatomic) long long groupCount;

- (void)didSetAttachingDIContext;
- (id)sequenceSender;
- (void).cxx_destruct;
- (void)endTransaction:(BOOL)a0;
- (void)run;
- (id)initWithGift:(id)a0;

@end
