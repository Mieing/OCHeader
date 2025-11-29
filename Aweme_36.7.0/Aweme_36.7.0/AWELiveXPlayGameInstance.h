@class NSString, IESLiveXPlayGameModel;
@protocol XPlayItemProtocol, XPlayCloudPlayerProtocol;

@interface AWELiveXPlayGameInstance : NSObject <IESLiveXPlayGameInstance> {
    BOOL isShowing;
    IESLiveXPlayGameModel *_gameModel;
}

@property (nonatomic) BOOL isCloudPlayer;
@property (retain, nonatomic) id<XPlayItemProtocol> xPlayItem;
@property (nonatomic) BOOL isShowingGuideCloudPlayer;
@property (retain, nonatomic) id<XPlayCloudPlayerProtocol> mainCloudPlayer;
@property (retain, nonatomic) id<XPlayCloudPlayerProtocol> guideCloudPlayer;
@property (readonly, nonatomic) BOOL isPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsShowing:(BOOL)a0;
- (id)initWithGameModel:(id)a0;
- (id)controller;
- (void).cxx_destruct;
- (long long)orientation;
- (BOOL)isShowing;
- (id)view;
- (id)pictureView;
- (id)gameModel;
- (void)setGameModel:(id)a0;

@end
