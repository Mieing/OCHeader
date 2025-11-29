@class AWEDitoCustomDataParserImpl;

@interface AWEDitoCommonToolBarActionViewManager : NSObject

@property (retain, nonatomic) AWEDitoCustomDataParserImpl *colorParser;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)duxImageActionWithModel:(id)a0 clickBlock:(id /* block */)a1;
- (id)duxTextActionWithModel:(id)a0 clickBlock:(id /* block */)a1;
- (id)duxTopImageBottomTextActionWithModel:(id)a0 clickBlock:(id /* block */)a1;
- (void)configActionAccessibility:(id)a0 withItem:(id)a1;
- (id)accessibilityStringWithIconTypeString:(id)a0;
- (id)imageViewWithModel:(id)a0;
- (void)configDitoStyle:(id)a0 toView:(id)a1;
- (double)calculatePaddingWithWidth:(double)a0;
- (long long)duxWeightWithString:(id)a0;
- (id)duxImageNameWithString:(id)a0;
- (id)getDUXActionWithItemModel:(id)a0 clickBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getColorFromString:(id)a0;

@end
