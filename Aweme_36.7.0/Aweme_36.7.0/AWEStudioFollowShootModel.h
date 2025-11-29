@class NSString, AWEStudioFollowShootNodeModel;

@interface AWEStudioFollowShootModel : NSObject

@property (retain, nonatomic) AWEStudioFollowShootNodeModel *firstConsumptionNodeModel;
@property (retain, nonatomic) AWEStudioFollowShootNodeModel *lastConsumptionNodeModel;
@property (retain, nonatomic) AWEStudioFollowShootNodeModel *contentNodeModel;
@property (copy, nonatomic) NSString *rootGid;

- (void).cxx_destruct;

@end
