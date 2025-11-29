@class NSString, NSArray, NSValue, UIView, NSAttributedString;

@interface IESIMChatSettingsSectionViewModel : NSObject

@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSAttributedString *attributedHeaderTitle;
@property (copy, nonatomic) NSString *footerTitle;
@property (copy, nonatomic) NSAttributedString *attributedFooterTitle;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } footerContentInsets;
@property (retain, nonatomic) UIView *footerContentView;
@property (nonatomic) struct CGSize { double width; double height; } footerContentViewSize;
@property (copy, nonatomic) NSArray *itemViewModels;
@property (retain, nonatomic) NSValue *sectionInset;
@property (nonatomic) double sectionSpace;

- (void).cxx_destruct;

@end
