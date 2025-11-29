@class NSMutableSet, NSArray, NSDictionary, IESECECTagGroupAttributes, UIView, NSMutableArray, NSString;

@interface IESECECTagGroupView : UIView <IESECECTagTrackerProtocol>

@property (retain, nonatomic) NSDictionary *tagGroupData;
@property (retain, nonatomic) IESECECTagGroupAttributes *attrs;
@property (retain, nonatomic) UIView *tagGroupView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double viewScale;
@property (retain, nonatomic) NSArray *allTagInfos;
@property (retain, nonatomic) NSMutableArray *shownTagInfos;
@property (nonatomic, getter=isDirty) BOOL dirty;
@property (nonatomic) struct CGSize { double width; double height; } previousBoundsSize;
@property (retain, nonatomic) NSString *pendingRenderID;
@property (retain, nonatomic) NSString *exposureOnceKey;
@property (weak, nonatomic) NSMutableSet *exposureOnceKeySet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createSplitterViewWithSplitterData:(id)a0;
+ (id)measureWithTagGroupData:(id)a0 attributes:(id)a1 updateBlock:(id /* block */)a2;
+ (void)initialize;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)trackError:(id)a0;
- (void)updateWithTagGroupData:(id)a0 attributes:(id)a1 completion:(id /* block */)a2;
- (id)renderIDWithData:(id)a0 attributes:(id)a1;
- (void)trackRenderEndWithDuration:(double)a0;
- (void)setupExposure;
- (void)renderWithParsedData:(id)a0 attributes:(id)a1 completion:(id /* block */)a2;
- (void)trackExposure;
- (id)getShownTagInfoList;
- (void).cxx_destruct;
- (id)init;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
