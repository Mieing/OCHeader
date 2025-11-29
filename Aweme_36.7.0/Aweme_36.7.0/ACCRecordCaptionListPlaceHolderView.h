@class UILabel, ACCRecordCaptionListPlaceHolderViewConfig;

@interface ACCRecordCaptionListPlaceHolderView : UIView

@property (retain, nonatomic) ACCRecordCaptionListPlaceHolderViewConfig *config;
@property (nonatomic) long long dataState;
@property (retain, nonatomic) UILabel *label;

- (void)updateDataState:(long long)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)buildView;

@end
