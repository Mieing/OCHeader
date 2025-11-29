@class AWEAdTaskContext;

@interface AWEAdPromiseContext : NSObject

@property (retain, nonatomic) AWEAdTaskContext *adTaskContext;
@property (nonatomic) BOOL adTaskTypeRunSuccess;

- (void).cxx_destruct;

@end
