@class NSString, MMScrollableActionSheetVerticalContainerView;
@protocol MMScrollableActionSheetWithVerticalRowsDelegate;

@interface MMScrollableActionSheetWithVerticalRows : MMScrollableActionSheet <MMScrollableActionSheetVerticalContainerViewDelegate>

@property (retain, nonatomic) MMScrollableActionSheetVerticalContainerView *verticalContainerView;
@property (weak, nonatomic) id<MMScrollableActionSheetWithVerticalRowsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)setupVerticalContainerView;
- (void)setVerticalRowInfoList:(id)a0;
- (void)addOrUpdateVerticalRowInfo:(id)a0;
- (void)onTappedRowInfo:(id)a0;
- (void).cxx_destruct;

@end
