@class UIButton, ACCAIGCLoraProfileModel, NSDictionary;
@protocol AWERecordAIGCCardHeaderDelegate;

@interface AWERecordAIGCCardHeader : UICollectionReusableView

@property (retain, nonatomic) UIButton *createButton;
@property (retain, nonatomic) UIButton *loraInfoButton;
@property (retain, nonatomic) ACCAIGCLoraProfileModel *profileModel;
@property (nonatomic) BOOL hideCreateEffect;
@property (nonatomic) BOOL hideInfoButton;
@property (retain, nonatomic) NSDictionary *commonTrackDict;
@property (weak, nonatomic) id<AWERecordAIGCCardHeaderDelegate> delegate;

- (void)detailInfoVCDismissWith:(BOOL)a0 hadDeleteModel:(BOOL)a1;
- (void)onCreateEffect;
- (void)onManagerLora;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
