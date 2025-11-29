@class NSCache, UIFont;

@interface IESLiveFixedFontTextSizeCache : NSObject

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSCache *sizeCache;

- (struct CGSize { double x0; double x1; })size4Text:(id)a0;
- (void).cxx_destruct;
- (id)initWithFont:(id)a0;

@end
