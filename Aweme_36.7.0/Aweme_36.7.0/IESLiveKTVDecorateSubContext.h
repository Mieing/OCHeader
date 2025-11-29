@class NSString, IGListAdapter, IESLiveKTVDecorateListCell, IESLiveKTVDecorateListDataSource, IESLiveKTVDecorateSubView, IESLiveKTVDecorateDataSource;

@interface IESLiveKTVDecorateSubContext : IESLiveKTVDecorateModel

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isUnfold;
@property (nonatomic) double sectionHeightFold;
@property (nonatomic) double sectionHeightUnfold;
@property (nonatomic) double cellHeightFold;
@property (nonatomic) double cellHeightUnfold;
@property (weak, nonatomic) IESLiveKTVDecorateListDataSource *dataSource;
@property (weak, nonatomic) IESLiveKTVDecorateListCell *rootView;
@property (weak, nonatomic) IESLiveKTVDecorateSubView *upperView;
@property (weak, nonatomic) IGListAdapter *innerAdapter;
@property (weak, nonatomic) IGListAdapter *outerAdapter;
@property (weak, nonatomic) IESLiveKTVDecorateDataSource *subDataSource;
@property (nonatomic) BOOL shouldShowFoldButton;
@property (nonatomic) long long thresholdForFoldButton;
@property (nonatomic) BOOL shouldShowInfoIcon;
@property (copy, nonatomic) NSString *resourceType;

- (void).cxx_destruct;

@end
