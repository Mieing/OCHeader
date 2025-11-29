@class NSString, UIImageView, UILabel;

@interface JSApiScopeConfirmTableViewCell : UITableViewCell {
    UIImageView *_selectImage;
    UILabel *_scopeLabel;
}

@property (retain, nonatomic) NSString *scopeDescription;
@property (nonatomic) BOOL isMustSelect;
@property (nonatomic) BOOL isSelect;

+ (id)getScopeLabel;
+ (void)layoutScopeLabel:(id)a0 width:(unsigned long long)a1 getHeight:(unsigned long long *)a2;
+ (unsigned long long)viewHeightWithScopeText:(id)a0 width:(unsigned long long)a1;
+ (unsigned long long)verticalMarginWithWidth:(unsigned long long)a0;

- (void)updateView;
- (void)upadteSelectImage;
- (void)updateScopeLabel;
- (void)layoutSubviews;
- (void)layoutScopeLabel:(id)a0 width:(unsigned long long)a1;
- (void).cxx_destruct;

@end
