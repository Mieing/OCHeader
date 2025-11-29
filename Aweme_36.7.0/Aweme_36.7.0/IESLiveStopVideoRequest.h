@class UIImage;

@interface IESLiveStopVideoRequest : IESLiveVideoCaptureRequest

@property (copy, nonatomic) UIImage *fallbackImage;

+ (id)requestWithSource:(id)a0 role:(long long)a1 bizTags:(id)a2 bizContext:(id)a3 callerCls:(id)a4 callerSel:(id)a5;
+ (id)requestFromReason:(id)a0;

- (void).cxx_destruct;

@end
