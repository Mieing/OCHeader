@class NSDictionary, NSString;
@protocol IESECGoodsDetailLiveFloatOnTop, IESECMallLiveMiniWindowServiceDelegate;

@interface IESECMallLiveMiniWindowService : NSObject

@property (retain, nonatomic) id<IESECGoodsDetailLiveFloatOnTop> liveMiniWindow;
@property (nonatomic) BOOL hasCloseSmallWindow;
@property (copy, nonatomic) id /* block */ liveMiniWindowClick;
@property (copy, nonatomic) id /* block */ liveMiniWindowMute;
@property (copy, nonatomic) id /* block */ liveMiniWindowReport;
@property (copy, nonatomic) NSDictionary *globalExtra;
@property (copy, nonatomic) NSDictionary *rootGlobalExtra;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *roomUrl;
@property (weak, nonatomic) id<IESECMallLiveMiniWindowServiceDelegate> delegate;

- (void)setupLiveFloatOnTopStateBlockIfNeeded;
- (id)getGlobalEnterFromMergeString;
- (id)getGlobalPreviousPageString;
- (void)reportLiveMiniWindow:(BOOL)a0 enter:(BOOL)a1;
- (void)setupLiveMiniWindowOn:(id)a0 roomID:(id)a1;
- (BOOL)attachLiveMiniWindow;
- (BOOL)detachLiveMiniWindow;
- (void)detachLiveMiniWindowViewDisappear;
- (void)attachLiveMiniWindowViewAppear:(id)a0 roomID:(id)a1;
- (void)muteLiveMiniWindow:(BOOL)a0;
- (void)setLiveMiniWindowTop:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
