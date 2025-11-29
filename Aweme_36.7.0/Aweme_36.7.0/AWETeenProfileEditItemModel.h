@class NSString, NSAttributedString, AWETeenProfileEditViewModel;

@interface AWETeenProfileEditItemModel : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) NSString *placeholder;
@property (retain, nonatomic) NSString *detail;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) AWETeenProfileEditViewModel *viewModel;
@property (copy, nonatomic) NSString *rightIcon;

- (id)initWithType:(long long)a0 viewModel:(id)a1;
- (void)setType:(long long)a0 viewModel:(id)a1;
- (void).cxx_destruct;

@end
