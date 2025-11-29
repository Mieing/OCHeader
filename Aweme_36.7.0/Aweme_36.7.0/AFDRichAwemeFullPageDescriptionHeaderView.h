@class AFDRichAwemeFullPageHeaderDescriptionView, AWEAwemeModel, AFDRichAwemeFullPageContext, AFDRichAwemeFullPageHeaderNewDescriptionView;

@interface AFDRichAwemeFullPageDescriptionHeaderView : UIView

@property (retain, nonatomic) AFDRichAwemeFullPageHeaderNewDescriptionView *selectableDescriptionView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AFDRichAwemeFullPageContext *context;
@property (nonatomic) double cellHeight;
@property (retain, nonatomic) AFDRichAwemeFullPageHeaderDescriptionView *descriptionView;

- (void)updateDataWithModel:(id)a0 context:(id)a1;
- (BOOL)useSelectableView;
- (BOOL)shouldRespondTapGestures:(id)a0;
- (void).cxx_destruct;

@end
