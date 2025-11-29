@class IESLLPOIDetailNGPageContext, NSString, IESLLPOITextTagRateInfoModel, IESLLPOIDetailLynxCollectionViewCell;

@interface IESLLPOIDetailNGAwemeCommentsComponentViewModel : LLDitoComponentViewModel <IESLLPOIDetailNGListCellProtocol>

@property (weak, nonatomic) IESLLPOIDetailNGPageContext *context;
@property (weak, nonatomic) IESLLPOIDetailLynxCollectionViewCell *cell;
@property (retain, nonatomic) IESLLPOITextTagRateInfoModel *model;
@property (nonatomic) long long cellIndex;
@property (nonatomic) BOOL isFirst;
@property (nonatomic) BOOL isLast;
@property (nonatomic) long long modelIndex;
@property (nonatomic) long long awemeIndex;
@property (nonatomic) BOOL hasRemoved;
@property (nonatomic) BOOL hasTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentReuseIdentifier;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (id)trackParamsForAutoTrackWithEventName:(id)a0 params:(id)a1;
- (void)componentViewWillShow;
- (void)componentViewDidEndShow;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
