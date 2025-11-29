@class NSMutableArray, AWEAwemeModel;

@interface AWEPlayInteractionLongPressModalFakePanelView : UIView

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) AWEAwemeModel *model;

- (void)setupDefaultStyle;
- (void)setupModernStyle;
- (void)setupDataArray:(id)a0;
- (id)initWithModel:(id)a0 style:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
