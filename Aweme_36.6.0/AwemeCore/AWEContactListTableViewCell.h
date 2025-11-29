@class AWEUserNameLabel;

@interface AWEContactListTableViewCell : AWEUIListTableViewCell

@property (retain, nonatomic) AWEUserNameLabel *centerUserNameLabel;

+ (double)sugguestHeight;
+ (long long)cellType;
+ (double)suggestedHeight;

- (id)positionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addHightlightWithAttributeString:(id)a0 prefixLength:(long long)a1 positions:(id)a2;
- (void)configWithModel:(id)a0 isFriend:(BOOL)a1 isHightLight:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)_setupUI;

@end
