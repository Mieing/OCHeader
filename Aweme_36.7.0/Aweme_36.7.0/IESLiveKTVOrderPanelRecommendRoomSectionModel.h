@interface IESLiveKTVOrderPanelRecommendRoomSectionModel : IESLiveKTVOrderPanelBaseSectionModel

@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL scrollEnable;

- (unsigned long long)sectionType;
- (Class)sectionClass;

@end
