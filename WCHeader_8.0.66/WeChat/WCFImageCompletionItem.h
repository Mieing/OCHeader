@class NSString;

@interface WCFImageCompletionItem : NSObject

@property (nonatomic) struct { long long options; struct CGSize { double width; double height; } size; long long mediaType; long long cacheType; } param;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSString *sizeKey;
@property (nonatomic) BOOL called;

- (id)initWithParam:(struct { long long x0; struct CGSize { double x0; double x1; } x1; long long x2; long long x3; })a0 callback:(id /* block */)a1;
- (BOOL)isValid;
- (struct CGSize { double x0; double x1; })size;
- (void)callCompletion:(id)a0 key:(id)a1 error:(id)a2 finished:(BOOL)a3;
- (void).cxx_destruct;

@end
