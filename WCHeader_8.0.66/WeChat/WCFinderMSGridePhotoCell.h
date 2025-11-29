@class NSMutableArray;

@interface WCFinderMSGridePhotoCell : WCFinderMSActivityBaseCell

@property (retain, nonatomic) NSMutableArray *photoCells;

+ (id)cellIdentifier;
+ (struct CGSize { double x0; double x1; })calculateDisplaySize:(struct CGSize { double x0; double x1; })a0 forVM:(id)a1 cellIdentifier:(id)a2 showSceneIntroduce:(BOOL)a3;
+ (void)prepareForReuseQueue:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)prepareForReusePhotoViews;
- (void)onContentVMChanged;
- (void)onClickPhoto:(id)a0;
- (void)onLongPress:(id)a0;
- (void).cxx_destruct;

@end
