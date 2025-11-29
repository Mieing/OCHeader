@class UIImage, NSData, NSArray;

@interface EmoticonCreateImageUploadTask : EmoticonCreateUploadTask

@property (retain, nonatomic) UIImage *editedImg;
@property (retain, nonatomic) NSData *gifData;
@property (retain, nonatomic) NSArray *editedDatas;
@property (nonatomic) BOOL isMultiImage;
@property (readonly, nonatomic) BOOL isGif;
@property (copy, nonatomic) id /* block */ prepareFailBlock;

- (id)init;
- (id)initWithImage:(id)a0;
- (id)initWithGifData:(id)a0;
- (void)setImageDatas:(id)a0;
- (void)startUpload;
- (void)startStaticImageUpload;
- (void)startGifImageUpload;
- (void)startMixUpload;
- (void)handleStaticImg:(id)a0 withAddingItem:(id)a1;
- (id)getStaticImgData:(id)a0;
- (void).cxx_destruct;

@end
