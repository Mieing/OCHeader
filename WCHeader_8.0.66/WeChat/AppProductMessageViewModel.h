@class ScanProductItem;

@interface AppProductMessageViewModel : AppUrlMessageViewModel {
    ScanProductItem *m_productItem;
}

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (id)cellViewClassName;
- (id)additionalAccessibilityDescription;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)titleText;
- (id)descText;
- (id)thumbImage;
- (id)productItem;
- (void).cxx_destruct;

@end
