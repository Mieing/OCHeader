@class NSString, UIView;
@protocol IESECShopPageContextV2, IESECLivePlayer;

@interface IESECShopSLILivePlayerElementView : IESECSliceXBaseContentElementView <IESECLivePlayerViewDelegate, IESECShopEventSubscriber> {
    BOOL _shouldResumePlayer;
}

@property (retain, nonatomic) id<IESECShopPageContextV2> shopContext;
@property (retain, nonatomic) UIView<IESECLivePlayer> *livePlayerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setupElementView;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)iesecshop_viewDidAppear:(BOOL)a0;
- (void)iesecshop_viewControllerIsNotTop;
- (void)updateWithRoomID:(id)a0 streamData:(id)a1;
- (void).cxx_destruct;

@end
