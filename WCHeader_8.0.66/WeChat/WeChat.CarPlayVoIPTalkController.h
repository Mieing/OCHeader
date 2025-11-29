@class NSString;

@interface WeChat.CarPlayVoIPTalkController : WeChat.CarPlayVoIPingController {
    void /* unknown type, empty encoding */ durationLabel;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, copy) NSString *durationLabel;

- (id)initWithContact:(id)a0 toast:(id)a1 isMuted:(BOOL)a2 isVideo:(BOOL)a3 isCaller:(BOOL)a4;
- (void)updateButtonsWithIsMuted:(BOOL)a0;
- (void)safeSetDelegateWithDelegate:(id)a0;
- (id)initWithContact:(id)a0 toast:(id)a1;
- (void).cxx_destruct;

@end
