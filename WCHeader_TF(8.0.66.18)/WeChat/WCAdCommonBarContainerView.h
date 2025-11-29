@class NSString, WCAdBaseBarView;
@protocol WCAdCommonBarContainerViewDelegate;

@interface WCAdCommonBarContainerView : MMUIView <WCAdRockPaperScissorsViewDelegate>

@property (retain, nonatomic) WCAdBaseBarView *baseBarView;
@property (weak, nonatomic) id<WCAdCommonBarContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)barViewClass:(id)a0;
+ (double)totalHeight:(id)a0 maxWidth:(double)a1;
+ (double)topMargin:(id)a0 maxWidth:(double)a1;
+ (double)bottomMargin:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 contentItemScene:(unsigned long long)a2;
- (id)createBarViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 contentItemScene:(unsigned long long)a2;
- (void)updateDataItem:(id)a0;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;
- (void)onRockPaperScissorsNotifyCanvasDidBePopedWithDataItem:(id)a0 showComment:(BOOL)a1;
- (void).cxx_destruct;

@end
