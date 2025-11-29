@class NSNumber, AWEBDPRankListItemModel;

@interface AWEBDPRankListSelfItemModel : NSObject

@property (copy, nonatomic) NSNumber *rank;
@property (copy, nonatomic) NSNumber *privateSetting;
@property (retain, nonatomic) AWEBDPRankListItemModel *item;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)needHideSelfItem;
- (void).cxx_destruct;

@end
