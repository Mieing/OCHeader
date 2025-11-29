@class NSMapTable, UIImageView, IESECRelationTagListModel, NSString, NSMutableArray, UITapGestureRecognizer;
@protocol IESECRelationTagListViewDelegate;

@interface IESECRelationTagListView : UIView <IESECRelationTagListView> {
    IESECRelationTagListModel *_model;
    double _maxWidth;
}

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) NSMutableArray *leftAlignmentTagContainers;
@property (retain, nonatomic) NSMutableArray *rightAlignmentTagContainers;
@property (retain, nonatomic) NSMapTable *widthCache;
@property (retain, nonatomic) UITapGestureRecognizer *recognizer;
@property (weak, nonatomic) id<IESECRelationTagListViewDelegate> delegate;
@property (readonly, nonatomic) IESECRelationTagListModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_scaleTagContainer:(id)a0 withFactor:(double)a1;
+ (double)p_calculateContainerWidth:(id)a0;

- (void)clickAction;
- (void)updateWithModel:(id)a0 maxWidth:(double)a1;
- (id)getVisibleTagContainerModels;
- (void)updateColorWithPercent:(double)a0;
- (id)getTagContainers;
- (void)updateColorWithModel:(id)a0 atPercent:(double)a1;
- (void)p_scaleTagListIfNeeded;
- (void)p_scaleAllTagContainersIfNeeded;
- (void)p_iterateContainers;
- (void)p_scaleLowestPriorityTagContainerIfNeeded;
- (void)p_fixedWidth;
- (void)p_configLeftAlignmentTagContainer:(id)a0 index:(long long)a1;
- (void)p_configRightAlignmentTagContainer:(id)a0 index:(long long)a1;
- (double)p_calculateAllContainersWidth:(id)a0;
- (id)p_lowestPriorityTagContainerModels;
- (void)p_removeLowestPriorityTagContainerIfNeeded;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithModel:(id)a0 maxWidth:(double)a1;

@end
