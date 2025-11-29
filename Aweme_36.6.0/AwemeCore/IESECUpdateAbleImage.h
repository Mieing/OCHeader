@class NSMapTable, NSString, UIImage, NSHashTable;

@interface IESECUpdateAbleImage : UIImage

@property (retain, nonatomic) UIImage *realImage;
@property (retain, nonatomic) NSHashTable *imageViews;
@property (retain, nonatomic) NSMapTable *buttons;
@property (retain, nonatomic) NSMapTable *buttonBackgrounds;
@property (retain, nonatomic) NSMapTable *sliders;
@property (copy, nonatomic) NSString *imageName;

- (void)updateImage:(id)a0;
- (void)addToImageView:(id)a0;
- (void)removeFromImageView:(id)a0;
- (void)addToButton:(id)a0 forState:(unsigned long long)a1;
- (void)removeFromButton:(id)a0 forState:(unsigned long long)a1;
- (void)removeFromButton:(id)a0 forBackgroundState:(unsigned long long)a1;
- (void)addToButton:(id)a0 forBackgroundState:(unsigned long long)a1;
- (void)addToSlider:(id)a0 forState:(unsigned long long)a1;
- (void)removeFromSlider:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;

@end
