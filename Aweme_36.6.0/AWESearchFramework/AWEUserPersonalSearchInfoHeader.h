@class UILabel, AWESearchRedirectGeneralSearchView, AWEUserPersonalSearchSectionHeader;

@interface AWEUserPersonalSearchInfoHeader : UIView

@property (retain, nonatomic) UILabel *hintTextLabel;
@property (retain, nonatomic) AWESearchRedirectGeneralSearchView *redirectView;
@property (retain, nonatomic) AWEUserPersonalSearchSectionHeader *sectionHeader;

- (void)configureUI;
- (void)updateWithHintText:(id)a0 centered:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
