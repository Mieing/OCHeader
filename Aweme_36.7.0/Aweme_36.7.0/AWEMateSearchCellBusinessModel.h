@class AWEIMUser;

@interface AWEMateSearchCellBusinessModel : AWEMateListCollectionViewCellBusinessModel

@property (retain, nonatomic) AWEIMUser *iMUser;

- (void)addHighlightToAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)subTitleAttributedString;
- (id)p_alias;
- (id)p_displayName;
- (id)normalTitleAttributedStringWithText:(id)a0;
- (id)p_sigLabelWithString:(id)a0 format:(id)a1;
- (id)normalSubTitleAttributedStringWithText:(id)a0;
- (id)initWithiMUser:(id)a0 activeStatusIdentifier:(id)a1 dataController:(id)a2;
- (void).cxx_destruct;
- (id)subTitle;
- (id)title;
- (id)attributedTitle;

@end
