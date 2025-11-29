@class MMAsset, NSString, UIImage, NSData, CMessageWrap, PHAsset;

@interface MMImageBrowserViewModel : NSObject <MMMediaBrowserViewModel>

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) PHAsset *imagePHAsset;
@property (retain, nonatomic) MMAsset *imageMMAsset;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) int mediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImage:(id)a0 imageData:(id)a1;
- (id)viewClassName;
- (id)title;
- (id)subTitle;
- (id)getForwardMessageWrap;
- (id)generateFavItem;
- (void)asyncScaleFitMemoryImage:(id /* block */)a0;
- (void).cxx_destruct;

@end
