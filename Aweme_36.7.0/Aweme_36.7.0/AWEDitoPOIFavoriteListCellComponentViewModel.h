@class AWEDitoPOIFavoriteListCellComponentView, AWEPOISimpleListInfo, NSString, AWEDitoPOIFavoritePageContext;

@interface AWEDitoPOIFavoriteListCellComponentViewModel : DitoComponentViewModel

@property (weak, nonatomic) AWEDitoPOIFavoritePageContext *context;
@property (weak, nonatomic) AWEDitoPOIFavoriteListCellComponentView *cell;
@property (retain, nonatomic) AWEPOISimpleListInfo *listInfo;
@property (copy, nonatomic) NSString *collectTime;
@property (copy, nonatomic) NSString *cornerText;
@property (retain, nonatomic) NSString *btmString;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (id)trackParamsForAutoTrackWithEventName:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
