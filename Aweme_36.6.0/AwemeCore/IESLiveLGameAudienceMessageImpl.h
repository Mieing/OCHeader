@class NSString, IESLiveLGameAudienceModel;
@protocol IESLiveLGameAudienceMessageDelegate;

@interface IESLiveLGameAudienceMessageImpl : IESLiveLGameMessageImpl

@property (retain, nonatomic) IESLiveLGameAudienceModel *model;
@property (copy, nonatomic) NSString *progressInfo;
@property (weak, nonatomic) id<IESLiveLGameAudienceMessageDelegate> delegate;

- (BOOL)isVideoLive;
- (void)gameViewWillAppear;
- (void)updateGameProgress:(id)a0 callback:(id /* block */)a1;
- (void)childHandleMethodGetLiveSetting:(id)a0 callback:(id /* block */)a1;
- (void)childHandleMethodSyncGameProgress:(id)a0 callback:(id /* block */)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
