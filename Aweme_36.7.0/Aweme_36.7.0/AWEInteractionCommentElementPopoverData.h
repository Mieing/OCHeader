@class NSDictionary, AWEAwemeModel;

@interface AWEInteractionCommentElementPopoverData : NSObject <CAAnimationDelegate, AWEInteractionElementPopoverDataProtocol> {
    void /* function */ contextDict;
    void /* unknown type, empty encoding */ generalModel;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ didLoadData;
    void /* unknown type, empty encoding */ didAddObserver;
    void /* unknown type, empty encoding */ Views;
    void /* unknown type, empty encoding */ dismissBlock;
    void /* unknown type, empty encoding */ totalAnimationCount;
    void /* unknown type, empty encoding */ finishAnimationCount;
    void /* unknown type, empty encoding */ interactionContainer;
    void /* unknown type, empty encoding */ coverView;
    void /* unknown type, empty encoding */ animationImage;
}

@property (nonatomic, copy) NSDictionary *contextDict;
@property (nonatomic, retain) AWEAwemeModel *model;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)elementContentView;
- (void)configContentView:(id)a0 atIndex:(long long)a1;
- (void)loadDataIfNeeded:(id /* block */)a0 releaseBlock:(id /* block */)a1;
- (void)eventOccurAtIndex:(long long)a0 target:(id)a1 sourceView:(id)a2 containerView:(id)a3 eventType:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)removeCoverView;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (long long)dataCount;

@end
