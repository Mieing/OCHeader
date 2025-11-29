@class UIImage, NSMapTable, NSHashTable;

@interface AWEUpdatableImage : UIImage

@property (retain, nonatomic) UIImage *realImage;
@property (retain, nonatomic) NSHashTable *imageViews;
@property (retain, nonatomic) NSMapTable *buttonsBkg;
@property (retain, nonatomic) NSMapTable *buttons;

- (void)updateImage:(id)a0;
- (void)updateImageWithSkinResolveBlock:(id /* block */)a0;
- (void)addToImageView:(id)a0;
- (void)removeFromImageView:(id)a0;
- (void)addToButton:(id)a0 forState:(unsigned long long)a1;
- (void)removeFromButton:(id)a0 forState:(unsigned long long)a1;
- (void)addToButtonBackground:(id)a0 forState:(unsigned long long)a1;
- (void)removeFromButtonBackground:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;

@end
