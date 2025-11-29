@class NSIndexPath, WCFileBrowseInfo, UIImageView, WCFileBrowseInfoBtn, UILabel, NSString, MMUILabel;
@protocol WCFileBrowseCellDelegate;

@interface WCFileBrowseCell : UITableViewCell

@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIImageView *fileHeaderView;
@property (retain, nonatomic) MMUILabel *headLabel;
@property (retain, nonatomic) UILabel *fileSizeLabel;
@property (retain, nonatomic) UILabel *fromWhoLabel;
@property (retain, nonatomic) UILabel *firstNameLabel;
@property (retain, nonatomic) UILabel *centerLabel;
@property (retain, nonatomic) UILabel *secondNameLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) WCFileBrowseInfoBtn *infoIconBtn;
@property (retain, nonatomic) WCFileBrowseInfo *browseInfo;
@property (nonatomic) BOOL bSelected;
@property (copy, nonatomic) NSString *searchText;
@property (weak, nonatomic) id<WCFileBrowseCellDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *cellIndexPath;
@property (nonatomic) unsigned long long type;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getSperatorInset;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getSperatorInsetForSectionLastCell;
+ (double)getCellHeight:(double)a0 browseInfo:(id)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 type:(unsigned long long)a2;
- (void)initView;
- (void)updateWithBrowseInfo:(id)a0;
- (void)updateWithBrowseInfo:(id)a0 selected:(BOOL)a1;
- (void)updateWithBrowseInfo:(id)a0 selected:(BOOL)a1 searchText:(id)a2;
- (unsigned long long)accessibilityTraits;
- (void)layoutSubviews;
- (void)updateView;
- (id)p_getFromWhoTitleString;
- (void)onPreviewFile:(id)a0;
- (void).cxx_destruct;

@end
