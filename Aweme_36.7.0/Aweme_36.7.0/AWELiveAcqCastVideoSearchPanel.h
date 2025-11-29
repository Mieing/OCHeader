@class NSString, AWELiveAcqSearchResultView, NSTimer, AWELiveAcqCastVideoSearchSugManager, AWELiveAcqSearchSugView, AWELiveAcqSearchTextField, UIView;
@protocol AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqCastVideoSearchPanel : UIView <UITextFieldDelegate>

@property (retain, nonatomic) AWELiveAcqCastVideoSearchSugManager *sugManager;
@property (retain, nonatomic) AWELiveAcqSearchResultView *resView;
@property (retain, nonatomic) AWELiveAcqSearchSugView *sugView;
@property (retain, nonatomic) AWELiveAcqSearchTextField *textFiled;
@property (retain, nonatomic) NSTimer *sugTimer;
@property (retain, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (retain, nonatomic) UIView *expandableView;
@property (copy, nonatomic) id /* block */ didClickCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getSugTextFieldParams;
- (long long)getCursorPosition;
- (void)didSelectKeyword:(id)a0 trackParams:(id)a1;
- (void)textFieldTextChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)dealloc;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
