@class UIView, NSString, IESECECTagInfo, IESECSliceXBaseElementView, NSMutableDictionary, NSDictionary, NSMutableSet, NSNumber, IESECECTagAttributes;

@interface IESECECTagView : UIView <IESECECTagTrackerProtocol, SLIActionInterceptor>

@property (nonatomic) long long dataType;
@property (retain, nonatomic) IESECECTagInfo *tagInfo;
@property (retain, nonatomic) IESECECTagAttributes *attrs;
@property (copy, nonatomic) NSString *etagTemplateID;
@property (copy, nonatomic) NSDictionary *dataFields;
@property (retain, nonatomic) NSMutableDictionary *mergedTrackParams;
@property (retain, nonatomic) NSNumber *countdownServerTime;
@property (nonatomic) double viewScale;
@property (nonatomic) double fontScale;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) IESECSliceXBaseElementView *elementView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic, getter=isDirty) BOOL dirty;
@property (nonatomic) struct CGSize { double width; double height; } previousBoundsSize;
@property (retain, nonatomic) NSString *exposureOnceKey;
@property (weak, nonatomic) NSMutableSet *exposureOnceKeySet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)measureWithTagData:(id)a0 attributes:(id)a1 completion:(id /* block */)a2;
+ (void)initialize;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)trackError:(id)a0;
- (void)updateWithTagData:(id)a0 attributes:(id)a1 completion:(id /* block */)a2;
- (void)trackRenderEndWithDuration:(double)a0;
- (void)trackExposure;
- (void)p_updateWithTagData:(id)a0 attributes:(id)a1 measureOnly:(BOOL)a2 completion:(id /* block */)a3;
- (void)parseTagData:(id)a0 attrs:(id)a1;
- (void)updateElementViewWithError:(id *)a0;
- (void)updateExposure;
- (BOOL)interceptTriggeredAction:(id)a0;
- (id)getTagInfo;
- (void).cxx_destruct;
- (id)init;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
