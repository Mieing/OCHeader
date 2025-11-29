@class AWEGrouponHalfScreenContainerModel;

@interface AWEGrouponShowHalfScreenShowStatus : NSObject

@property (weak, nonatomic) AWEGrouponHalfScreenContainerModel *halfScreenContainerModel;
@property (nonatomic) BOOL willShow;
@property (nonatomic) BOOL didShow;

- (void).cxx_destruct;

@end
