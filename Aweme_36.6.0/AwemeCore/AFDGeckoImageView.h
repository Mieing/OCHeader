@class NSString;

@interface AFDGeckoImageView : UIImageView <AFDGeckoImageViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUpdatableWithImage:(id)a0;
+ (void)setImage:(id)a0 forImageView:(id)a1 setBlock:(id /* block */)a2;
+ (void)setHighlightedImage:(id)a0 forImageView:(id)a1 setBlock:(id /* block */)a2;

@end
