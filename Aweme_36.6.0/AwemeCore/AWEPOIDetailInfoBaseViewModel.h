@class NSString, NSNumber, UIView;

@interface AWEPOIDetailInfoBaseViewModel : NSObject <AWEPOIDetailInfoViewModelProtocol>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemPadding;
@property (nonatomic) double cardCornerRadius;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *dynamicId;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) double updateStartTime;
@property (copy, nonatomic) id /* block */ updateCompletedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeightForDataModel:(id)a0 width:(double)a1 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 cellIdentifier:(id)a4;

- (void)setupViewModel;
- (id)geckoID;
- (void)poi_onPageAppear;
- (void)poi_onPageDisappear;
- (void)poi_onAppear;
- (void)poi_onCompleteAppear;
- (void)poi_onPartlyDisappear;
- (void)poi_onDisappear;
- (void).cxx_destruct;
- (id)cardName;
- (void)updateWithModel:(id)a0;

@end
