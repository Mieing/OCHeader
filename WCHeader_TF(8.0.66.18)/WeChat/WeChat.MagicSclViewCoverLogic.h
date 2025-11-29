@interface WeChat.MagicSclViewCoverLogic : NSObject {
    void /* unknown type, empty encoding */ startupCoverView;
    void /* unknown type, empty encoding */ startupCoverDebug;
    void /* unknown type, empty encoding */ hasRemoveCover;
    void /* unknown type, empty encoding */ showCoverTimestampMs;
    void /* unknown type, empty encoding */ hasReportClickCover;
    void /* unknown type, empty encoding */ sclView;
    void /* unknown type, empty encoding */ bizName;
    void /* unknown type, empty encoding */ imageCache;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ frameSet;

- (id)initWithSclView:(id)a0 bizName:(id)a1;
- (void)showStartupCoverView;
- (void)removeStartupCoverViewFromScl;
- (void)onSclViewAddSubView;
- (void)onSclViewLayout;
- (id)init;
- (void).cxx_destruct;

@end
