@class NSString, NSDictionary, IESECSliceXBaseElementView, IESECECTagAttributes;

@interface SLIECTagInlineCustomContent : NSObject <IESECSliceXInlineCustomContent>

@property (copy, nonatomic) NSDictionary *tagData;
@property (nonatomic) BOOL tagShouldHidden;
@property (retain, nonatomic) IESECECTagAttributes *tagAttrs;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (weak, nonatomic) IESECSliceXBaseElementView *textElementView;
@property (copy, nonatomic) id /* block */ widthChangeCallback;
@property (readonly, nonatomic) BOOL isClickAndLongClickSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)createInlineViewWithTextElementView:(id)a0;
- (void)registerWidthChangeCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithElement:(id)a0;

@end
