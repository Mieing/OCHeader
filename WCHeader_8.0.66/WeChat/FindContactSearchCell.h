@class NSString, UIImageView, UIImage, AttributeLabel, MMHeadImageView;

@interface FindContactSearchCell : MMTableViewCell {
    UIImage *_headImage;
    MMHeadImageView *_headImageView;
    UIImageView *_imageView;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_detailLabel;
}

@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *detail;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateStatus:(BOOL)a0;
- (void)updateWithImage:(id)a0 displayName:(id)a1 detail:(id)a2 searchText:(id)a3;
- (void)updateSearchCellWithSearchText:(id)a0;
- (void).cxx_destruct;

@end
