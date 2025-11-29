@class NSDictionary, IESLiveLGameDuringLiveModel;
@protocol IESLiveLGameDuringLiveMessageDelegate;

@interface IESLiveLGameDuringLiveMessageImpl : IESLiveLGameMessageImpl

@property (retain, nonatomic) IESLiveLGameDuringLiveModel *model;
@property (nonatomic) double uploadProgressTime;
@property (copy, nonatomic) NSDictionary *instantPlayConfig;
@property (weak, nonatomic) id<IESLiveLGameDuringLiveMessageDelegate> delegate;

- (void)childHandleMethodGetLiveSetting:(id)a0 callback:(id /* block */)a1;
- (void)childHandleMethodUploadGameProgress:(id)a0 callback:(id /* block */)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)updateModel:(id)a0;

@end
