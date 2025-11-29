@class NSString, UIImageView, UILabel;

@interface MMAuthorizeScopeTableViewCell : UITableViewCell {
    UIImageView *_selectImage;
    UILabel *_scopeLabel;
}

@property (retain, nonatomic) NSString *scopeDescription;
@property (nonatomic) BOOL isMustSelect;
@property (nonatomic) BOOL isSelect;

+ (double)viewHeightWithScopeText:(id)a0 cellWidth:(double)a1;

- (void)updateView;
- (void)upadteSelectImage;
- (void)updateScopeLabel;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
