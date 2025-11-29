@class FavImagePreView, NSString;

@interface FavRecordImgNodeView : FavRecordBaseNodeView <FavImagePreViewDelegate>

@property (readonly, nonatomic) FavImagePreView *m_imgPreView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addContentSubView;
- (void)onClickAsRefer;
- (void)onClickFavPreImage:(id)a0 ImageIndex:(unsigned int)a1;
- (void)onLongPressedFavPreImage:(id)a0;
- (void)onWillLongPressFavImagePreView:(id)a0 imageView:(id)a1;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
