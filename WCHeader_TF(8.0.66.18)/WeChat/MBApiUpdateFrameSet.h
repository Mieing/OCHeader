@class MBFrameSetPosition;

@interface MBApiUpdateFrameSet : WXPBGeneratedMessage

@property (nonatomic) int viewId;
@property (nonatomic) BOOL hide;
@property (retain, nonatomic) MBFrameSetPosition *position;

+ (void)initialize;

- (void)setPosition:(id)a0;
- (id)position;
- (void)setHide:(BOOL)a0;
- (BOOL)hide;
- (void)setViewId:(int)a0;
- (int)viewId;

@end
