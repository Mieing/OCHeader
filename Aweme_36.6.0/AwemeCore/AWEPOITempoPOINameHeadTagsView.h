@class NSMutableArray, UIView;

@interface AWEPOITempoPOINameHeadTagsView : UIView

@property (nonatomic) long long tagsRowHeight;
@property (nonatomic) long long itemsMargin;
@property (nonatomic) long long rowsMargin;
@property (retain, nonatomic) NSMutableArray *hasExposedIDs;
@property (retain, nonatomic) NSMutableArray *stackViews;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ onTagExposure;
@property (copy, nonatomic) id /* block */ onTagClick;

- (id)createNameLabelWithModel:(id)a0;
- (void)configTagView:(id)a0 model:(id)a1;
- (void)updateUIWithNumberOfRows:(long long)a0 allTagsStartRow:(long long)a1 tagViews:(id)a2;
- (void)configWithHeadLinesData:(id)a0 rowsMargin:(long long)a1 itemsMargin:(long long)a2 tagsRowHeight:(long long)a3;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
