@class NSString;

@interface ACCResourceSVGBundle : NSObject <ACCResourceSVGImageProtocol>

@property (copy, nonatomic) NSString *svgColorName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)svg_imageWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1 isFromSVGCache:(BOOL *)a2;
- (id)svgNames;
- (id)svg_imageWithName:(id)a0 isFromSVGCache:(BOOL *)a1;
- (void)forceImageColorGray:(BOOL)a0;
- (BOOL)isSVGTableContainsImage:(id)a0;
- (void).cxx_destruct;

@end
