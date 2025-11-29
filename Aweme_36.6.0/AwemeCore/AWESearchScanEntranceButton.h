@interface AWESearchScanEntranceButton : DUXBaseButton

@property (nonatomic) unsigned long long type;

- (void)updateWithType:(unsigned long long)a0 model:(id)a1 completion:(id /* block */)a2;
- (void)setImageView;
- (void)resetBorder;
- (void)setImageWithModel:(id)a0 completion:(id /* block */)a1;
- (void)setCoverForAlbum:(id)a0 completion:(id /* block */)a1;
- (void)setCoverForVideo:(id)a0 completion:(id /* block */)a1;
- (void)setUIProperties:(id)a0;
- (id)init;
- (void)layoutSubviews;

@end
