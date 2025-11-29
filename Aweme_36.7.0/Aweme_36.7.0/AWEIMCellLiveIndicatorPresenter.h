@class NSString;
@protocol AWEIMCellLiveIndicatorViewDelegate;

@interface AWEIMCellLiveIndicatorPresenter : AWEIMCellPresenterBase <AWEIMChatCellComponentAccessibility>

@property (nonatomic) BOOL enableClick;
@property (nonatomic) BOOL needShowRingView;
@property (weak, nonatomic) id<AWEIMCellLiveIndicatorViewDelegate> viewDelegate;
@property (copy, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;
- (id)initWithEnableClick:(BOOL)a0 needShowRingView:(BOOL)a1 viewDelegate:(id)a2;
- (void).cxx_destruct;

@end
