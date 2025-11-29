@class AWEIMTaskPlatformContentDataSource, AWEIMTaskCardNaviDatasource;

@interface AWEIMTaskPlatformViewDataSource : NSObject

@property (retain, nonatomic) AWEIMTaskCardNaviDatasource *naviDatasource;
@property (retain, nonatomic) AWEIMTaskPlatformContentDataSource *contentDatasource;

- (void).cxx_destruct;

@end
