@class NSMutableDictionary;
@protocol WAShareAppMessageThumbImagePoolDelegate;

@interface WAShareAppMessageThumbImagePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *thumbImageDictionary;
@property (weak, nonatomic) id<WAShareAppMessageThumbImagePoolDelegate> delegate;

+ (id)generateKey;
+ (double)getCompressRatioWithImage:(id)a0;

- (void)registerSnapImageForKey:(id)a0 shouldCrop:(BOOL)a1 cropSize:(struct CGSize { double x0; double x1; })a2;
- (void)registerLocalImageData:(id)a0 forKey:(id)a1 shouldCrop:(BOOL)a2 cropSize:(struct CGSize { double x0; double x1; })a3;
- (void)registerWebImageURLString:(id)a0 forKey:(id)a1 shouldCrop:(BOOL)a2 cropSize:(struct CGSize { double x0; double x1; })a3;
- (void)registerOriginImageData:(id)a0 forKey:(id)a1;
- (void)popImageDataForKey:(id)a0 completion:(id /* block */)a1;
- (void)popImageDataForKey:(id)a0 snapFromTop:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned long long)typeForKey:(id)a0;
- (void)forceUseOriginImageForKey:(id)a0;
- (void)_handleWebImageWithURLString:(id)a0 shouldCrop:(BOOL)a1 cropSize:(struct CGSize { double x0; double x1; })a2 useOriginImage:(BOOL)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
