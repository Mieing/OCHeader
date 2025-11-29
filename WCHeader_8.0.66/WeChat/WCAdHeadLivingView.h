@class MMUIImageView, WCAdHeadLivingInfo, MMUIView, MMUILabel;

@interface WCAdHeadLivingView : MMUIView

@property (retain, nonatomic) WCAdHeadLivingInfo *livingInfo;
@property (retain, nonatomic) MMUIView *backgroundView;
@property (retain, nonatomic) MMUIImageView *iconView;
@property (retain, nonatomic) MMUILabel *liveStatusText;

- (id)initWithDataItem:(id)a0;
- (void)initSubviews;
- (void)adjustSubviews;
- (void)clearAllSubviews;
- (double)viewWidth;
- (BOOL)isLiveEnd;
- (void)updateDataItem:(id)a0;
- (void).cxx_destruct;

@end
