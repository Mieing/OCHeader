@class NSData, UIImage, NSString;

@interface AWESearchImageCompressorConfig : NSObject

@property (retain, nonatomic) NSData *hightCompressData;
@property (retain, nonatomic) NSData *middleCompressData;
@property (retain, nonatomic) NSData *lowCompressData;
@property (nonatomic) float compression;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic) float maxDataSize;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *scene;

- (void).cxx_destruct;

@end
