@class UILabel, NSString, UIView;

@interface AWEDitoCommonStripView : UIView <DitoMultiTabStripViewProtocol>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) unsigned long long lineStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithData:(id)a0;
- (id)indexLineView;
- (id)indexLineConfig;
- (void)stripViewDidSelected;
- (void)stripViewDidDeSelected;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
