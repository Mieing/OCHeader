@class NSString, AWEIMRecommendFansGroupModel;

@interface AWEIMRecommendFansGroupItemViewModel : NSObject

@property (copy, nonatomic) NSString *groupOwnerDesc;
@property (copy, nonatomic) NSString *groupMemberDesc;
@property (copy, nonatomic) NSString *joinButtonTitle;
@property (nonatomic) BOOL joinButtonEnable;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (retain, nonatomic) AWEIMRecommendFansGroupModel *model;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL hasShown;

- (id)initWithModel:(id)a0 scene:(unsigned long long)a1;
- (void)trackRecommendGroupCardShowEvent;
- (void).cxx_destruct;

@end
