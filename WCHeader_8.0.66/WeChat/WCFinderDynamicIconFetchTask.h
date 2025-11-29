@class UIImage, NSMutableArray;

@interface WCFinderDynamicIconFetchTask : NSObject

@property (retain, nonatomic) NSMutableArray *callbackList;
@property (nonatomic) BOOL filled;
@property (retain, nonatomic) UIImage *image;

+ (id)keyForUrl:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2;
+ (id)keyForDynamaicConfig:(id)a0;
+ (id)singleTask:(id)a0;
+ (id)dynamicImageTaskWithDark:(id)a0 light:(id)a1;

- (void)addImageLoadCallback:(id /* block */)a0;
- (BOOL)isFinish;
- (void).cxx_destruct;

@end
