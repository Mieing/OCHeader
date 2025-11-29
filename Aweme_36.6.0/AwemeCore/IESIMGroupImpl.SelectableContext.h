@class NSString;

@interface IESIMGroupImpl.SelectableContext : NSObject <AWEIMSelectableContextProtocol> {
    void /* unknown type, empty encoding */ commonViewModel;
    void /* unknown type, empty encoding */ pageViewModel;
    void /* unknown type, empty encoding */ titleViewModel;
    void /* unknown type, empty encoding */ listViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModels;
    void /* unknown type, empty encoding */ _toastText;
    void /* unknown type, empty encoding */ _pageStatus;
    void /* unknown type, empty encoding */ _isDismiss;
    void /* unknown type, empty encoding */ _showLoading;
}

@property (nonatomic, copy) NSString *toastText;
@property (nonatomic) long long pageStatus;
@property (nonatomic) BOOL canShowInnerPush;

- (void)updatePageStatus:(long long)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;

@end
