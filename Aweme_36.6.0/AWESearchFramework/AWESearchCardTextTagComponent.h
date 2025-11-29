@class AWESearchCardTextTagComponentModel, NSString, UIImageView, UILabel, UIView;

@interface AWESearchCardTextTagComponent : AWESearchComponent <AWESearchCardTextTagComponentProtocal>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWESearchCardTextTagComponentModel *componentModel;
@property (nonatomic) double textWidth;
@property (nonatomic) double textHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (double)tagHeightWith:(long long)a0;
+ (id)tagFontWithWeight:(long long)a0;

- (void)componentViewLayoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
