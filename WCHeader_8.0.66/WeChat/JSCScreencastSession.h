@class NSString, NSTimer, JSCTarget;

@interface JSCScreencastSession : NSObject {
    JSCTarget *_target;
    int _frameId;
    struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long __value_; } __cap_alloc_; } _framesAcked;
    int _frameInterval;
    NSString *_format;
    int _quality;
    int _maxWidth;
    int _maxHeight;
    NSTimer *_timerCookie;
    int _deviceWidth;
    int _deviceHeight;
    int _offsetTop;
    int _pageScaleFactor;
    int _scrollOffsetX;
    int _scrollOffsetY;
}

- (id)initWithTarget:(id)a0 format:(id)a1 quality:(int)a2 maxWidth:(int)a3 maxHeight:(int)a4;
- (void)dispose;
- (void)start;
- (void)stop;
- (void)ackFrame:(int)a0;
- (void)recordingLoop;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
