@class AWENearbyHalfScreenContainerModel;

@interface AWENearbyShowHalfScreenShowStatus : NSObject

@property (weak, nonatomic) AWENearbyHalfScreenContainerModel *halfScreenContainerModel;
@property (nonatomic) BOOL willShow;
@property (nonatomic) BOOL didShow;

- (void).cxx_destruct;

@end
