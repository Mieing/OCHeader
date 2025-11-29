@class UIImage, NSString;

@interface GXImageView : UIImageView <GXImageViewProtocal>

@property (retain, nonatomic) UIImage *defaultImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)gx_resetForReuse;
- (void)gx_setMarkInfo:(id)a0;
- (void)gx_setSummaryInfo:(id)a0;
- (void)gx_setImageWithURLArray:(id)a0 placeholderImage:(id)a1 completed:(id /* block */)a2;
- (void)gx_setImageWithURLString:(id)a0 placeholderImage:(id)a1 completed:(id /* block */)a2;
- (void)gx_setLocalImage:(id)a0;
- (void).cxx_destruct;

@end
