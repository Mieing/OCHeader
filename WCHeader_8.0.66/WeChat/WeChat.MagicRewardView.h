@class NSString;

@interface WeChat.MagicRewardView : UIView {
    void /* unknown type, empty encoding */ viewId;
    void /* unknown type, empty encoding */ _giftName;
    void /* unknown type, empty encoding */ _qualityLevel;
    void /* unknown type, empty encoding */ _pixelRatio;
    void /* unknown type, empty encoding */ attributes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listeners;
    void /* unknown type, empty encoding */ $__lazy_storage_$_resListeners;
}

@property (nonatomic, copy) NSString *giftName;
@property (nonatomic) long long qualityLevel;
@property (nonatomic) float pixelRatio;
@property (nonatomic, readonly) float duration;
@property (nonatomic, readonly) float designAspectRatio;
@property (nonatomic) void /* unknown type, empty encoding */ repeatCount;
@property (nonatomic, readonly) long long usage;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1;
- (id)initWithAttributes:(id)a0;
- (void)playWithGiftParam:(id)a0;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)updateObjectWithKey:(id)a0 value:(id)a1;
- (void)unload;
- (void)fetchIsPlaying:(id /* block */)a0;
- (void)fetchStats:(id /* block */)a0;
- (id)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (id)addResListener:(id)a0;
- (void)removeResListener:(id)a0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
