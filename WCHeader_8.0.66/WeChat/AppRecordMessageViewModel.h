@interface AppRecordMessageViewModel : AppStandardTextContentMessageViewModel {
    double m_titleHeight;
    double m_descHeight;
}

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (id)title;
- (unsigned long long)contentLayoutType;
- (id)contentText;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)additionalAccessibilityDescription;

@end
