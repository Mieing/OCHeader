@class NSString;

@interface AppNoteMessageViewModelClassic : CommonMessageViewModel {
    NSString *m_titleText;
    NSString *m_contentText;
    double m_titleHeight;
    double m_contentHeight;
}

@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *contentText;
@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) double contentHeight;
@property (readonly, nonatomic) int imageCount;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)additionalAccessibilityDescription;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getReferImage;
- (void).cxx_destruct;

@end
