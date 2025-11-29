@class NSString, MMTagTextField, MMUISearchBar, NSMutableArray;
@protocol WSTagSearchDelegate;

@interface WSTagSearchLogic : NSObject

@property (weak, nonatomic) MMUISearchBar *searchBar;
@property (weak, nonatomic) MMTagTextField *textField;
@property (retain, nonatomic) NSMutableArray *tagList;
@property (retain, nonatomic) NSString *tagText;
@property (retain, nonatomic) NSString *normalText;
@property (weak, nonatomic) id<WSTagSearchDelegate> deletage;
@property (nonatomic) BOOL bForbidTagDeletion;
@property (retain, nonatomic) NSString *tipsWhenEmptyNormalText;

- (id)initWithTagSearchBar:(id)a0;
- (id)initWithTagTextField:(id)a0;
- (void)dealloc;
- (void)setTagHolders:(id)a0 withNormalText:(id)a1;
- (BOOL)tagSearchObj:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)tagSearchBarTextDidChanged:(id)a0;
- (void)handleNormalTextChanged:(id)a0;
- (void)handleSearchInputChanged:(id)a0;
- (id)getTagQueryInfo:(id)a0;
- (id)userQuery:(id)a0;
- (id)getTagList;
- (id)getTagText;
- (void)resetTagSearchStatus;
- (id)getFont;
- (void)setTagAttributeText:(id)a0;
- (void)resetTypingAttributes;
- (void)updateTagText;
- (id)getSearchInputViewColor;
- (void)updateTagSearchContent;
- (void)updateSearchBarCustomTips;
- (void)hiddenSearchBarCustomTips;
- (id)getCurrentTips;
- (id)getTagSearchText;
- (void).cxx_destruct;

@end
