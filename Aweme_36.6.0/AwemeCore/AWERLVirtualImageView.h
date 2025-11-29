@class NSArray, NSString, UIImage, NSURL;

@interface AWERLVirtualImageView : AWERLVirtualView <AWERLVirtualViewOverride>

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSURL *imageUrl;
@property (copy, nonatomic) NSArray *imageUrlArray;
@property (copy, nonatomic) id /* block */ setImageViewUrlArrayBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)setImageViewUrlArrayBlock:(id /* block */)a0;
- (id)createViewToRender;
- (void)updateAttributesForRenderedView:(id)a0;
- (id)imageUrl:(id)a0;
- (id)imageUrlArray:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (id)image:(id)a0;

@end
