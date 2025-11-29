@class NSString, NSAttributedString, NSArray;
@protocol AWEIMSelectableContextProtocol;

@interface IESIMGroupImpl.GroupBotSelectableViewModel : NSObject <AWEIMSelectableCommonViewModelProtocol, AWEIMSelectablePageViewModelProtocol, AWEIMSelectableTitleViewModelProtocol, AWEIMSelectableListViewModelProtocol> {
    void /* function */ emptyTitleText;
    void /* function */ failTitleText;
    void /* function */ failDescriptionText;
    void /* function */ failButtonText;
    void /* function */ titleText;
    void /* function */ subtitleText;
    void /* function */ sectionViewModels;
    void /* function */ userSelectedViewModels;
    void /* function */ confirmText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectLimitToastText;
    void /* unknown type, empty encoding */ dataController;
    void /* unknown type, empty encoding */ cid;
    void /* unknown type, empty encoding */ defaultBotUids;
    void /* unknown type, empty encoding */ enterFrom;
    void /* unknown type, empty encoding */ enterMethod;
    void /* unknown type, empty encoding */ shouldShowGroupÀpprovalDialog;
}

@property (nonatomic, retain) id<AWEIMSelectableContextProtocol> selectableContext;
@property (nonatomic, copy) NSString *emptyTitleText;
@property (nonatomic, copy) NSString *failTitleText;
@property (nonatomic, copy) NSString *failDescriptionText;
@property (nonatomic, copy) NSString *failButtonText;
@property (nonatomic) double titleBarHeight;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, retain) NSAttributedString *titleAttributedText;
@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, retain) NSAttributedString *subtitleAttributedText;
@property (nonatomic, copy) NSArray *sectionViewModels;
@property (nonatomic, copy) NSArray *userSelectedViewModels;
@property (nonatomic, copy) NSString *confirmText;
@property (nonatomic) long long selectLimit;
@property (nonatomic, copy) NSString *selectLimitToastText;
@property (nonatomic, readonly) long long limitCount;

+ (id)url;

- (void)lodaMoreData;
- (void)didClickConfirmButton;
- (void)didSelectItemAtIndexPath:(id)a0;
- (void)didClickSubtitleLabel;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })emptyPageEdgeInsets;
- (void)emptyPagePrimaryButtonTapped;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)themeReload;
- (void)viewControllerDidDismiss;
- (void)viewDidLoad;
- (id)initWithCid:(id)a0 limitCount:(long long)a1 defaultBotUids:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
