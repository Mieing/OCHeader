@class NSString;

@interface WeChat.MagicSclFrameSet : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ frameSetId;
    void /* unknown type, empty encoding */ attached;
    void /* unknown type, empty encoding */ preloadScene;
    void /* unknown type, empty encoding */ layoutCallback;
    void /* unknown type, empty encoding */ sizeChangeCallback;
    void /* unknown type, empty encoding */ attachChangeCallback;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *frameSetId;
@property (nonatomic) void /* unknown type, empty encoding */ viewId;
@property (nonatomic) void /* unknown type, empty encoding */ width;
@property (nonatomic) void /* unknown type, empty encoding */ height;
@property (nonatomic) void /* unknown type, empty encoding */ bound;
@property (nonatomic) void /* unknown type, empty encoding */ inited;
@property (nonatomic, weak) void /* unknown type, empty encoding */ frameSetRoot;
@property (nonatomic, weak) void /* unknown type, empty encoding */ containerView;
@property (nonatomic, readonly) NSString *description;

- (void)initFrameSet;
- (void)updateContainerWithView:(id)a0;
- (void)bind;
- (void)unbind;
- (void)attach;
- (void)detach;
- (void)redraw;
- (void)resize;
- (id)init;
- (void).cxx_destruct;

@end
