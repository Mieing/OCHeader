@interface GameVideoGalleryShareMenuViewController : GameVideoBottomTipsViewController {
    id /* block */ _clickItemBlock;
}

- (id)initWithClickItemBlock:(id /* block */)a0;
- (void)setupContentView:(id)a0;
- (void)addTitleView:(id)a0;
- (void)addItemView:(id)a0 index:(int)a1 svgName:(id)a2 title:(id)a3 subtitle:(id)a4;
- (void)clickItem:(id)a0;
- (double)contentHeight;
- (BOOL)dismissWhenTapOutside;
- (BOOL)hideOkButton;
- (void).cxx_destruct;

@end
