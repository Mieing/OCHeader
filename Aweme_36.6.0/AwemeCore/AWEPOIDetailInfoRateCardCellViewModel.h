@class DitoPageContext, NSString, AWEPOIDetailRateCardView, NSNumber;

@interface AWEPOIDetailInfoRateCardCellViewModel : AWEPOIDetailInfoBaseViewModel

@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *poiBackendType;
@property (copy, nonatomic) NSString *poiEnterID;
@property (retain, nonatomic) NSNumber *sourceType;
@property (copy, nonatomic) NSString *creationIDForToComment;
@property (nonatomic) BOOL hasReward;
@property (nonatomic) long long attitudeGradesCnt;
@property (weak, nonatomic) DitoPageContext *context;
@property (retain, nonatomic) AWEPOIDetailRateCardView *cardView;
@property (copy, nonatomic) id /* block */ onClose;

+ (BOOL)shouldShowWithModel:(id)a0;
+ (double)preferredHeightForDataModel:(id)a0 width:(double)a1 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 cellIdentifier:(id)a4;

- (void)setupViewModel;
- (id)commonTrackParams;
- (void)poi_onAppear;
- (void)trackClose;
- (void)showModalWithGrade:(id)a0;
- (id)trackingParamsForToComment;
- (void)putPoiEnterID:(id)a0 sourceType:(id)a1;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
