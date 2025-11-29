@class IESLiveRoomIntroFunctionEntryItem, IESLiveTagView;

@interface IESLiveRoomIntroFunctionEntryView : UIView

@property (retain, nonatomic) IESLiveRoomIntroFunctionEntryItem *entryItem;
@property (retain, nonatomic) IESLiveTagView *leftTagView;
@property (retain, nonatomic) IESLiveTagView *rightTagView;
@property (copy, nonatomic) id /* block */ rightInfoDidTapped;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 entryItem:(id)a1;
- (void)updateEntryItem:(id)a0;
- (void)updateLeftTagView;
- (void)updateRightTagView;
- (void)rightTagViewDidTapped;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupLayout;

@end
