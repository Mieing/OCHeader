@class NSString;
@protocol MMOpenVoiceVideoViewDelegate;

@interface MMOpenVoiceVideoBase : UIView {
    unsigned long long _subIndex;
    long long _orientationBeforeEnterFullscreen;
}

@property (nonatomic) int memberId;
@property (retain, nonatomic) NSString *openId;
@property (nonatomic) int viewType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayRect;
@property (nonatomic) unsigned int videoId;
@property (nonatomic) long long orientation;
@property (weak, nonatomic) id<MMOpenVoiceVideoViewDelegate> delegate;

- (id)init;
- (int)updateDisplayRectBy:(id)a0;
- (int)initView:(int)a0 openId:(id)a1 dic:(id)a2 queue:(id)a3;
- (int)updateView:(int)a0 dic:(id)a1;
- (void)render:(char *)a0 dataLen:(int)a1 width:(int)a2 height:(int)a3 rotation:(int)a4;
- (void)uintView;
- (void)updateMemberId:(int)a0;
- (void)updateViewType:(int)a0;
- (BOOL)isCamera;
- (BOOL)isVideo;
- (BOOL)isScreen;
- (int)getMemberId;
- (id)getOpenId;
- (int)getViewType;
- (void)requestFullScreen:(int)a0;
- (void)exitFullScreen;
- (void)enableFullScreen:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoFrame;
- (void).cxx_destruct;

@end
