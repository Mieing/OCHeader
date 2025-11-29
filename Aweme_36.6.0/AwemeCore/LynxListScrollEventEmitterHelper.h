@class NSString, LynxListScrollEventEmitter;

@interface LynxListScrollEventEmitterHelper : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (nonatomic) struct CGSize { double width; double height; } lastContentSize;
@property (weak, nonatomic) LynxListScrollEventEmitter *emitter;
@property (nonatomic) double lastUpdateTime;
@property (retain, nonatomic) NSString *lastEvent;
@property (nonatomic) unsigned long long scrollPosition;
@property (nonatomic) unsigned long long scrollState;
@property (nonatomic) BOOL horizontalLayout;

- (id)initWithEmitter:(id)a0;
- (id)fetchScrollEvent:(id)a0;
- (unsigned long long)position:(id)a0;
- (void).cxx_destruct;

@end
