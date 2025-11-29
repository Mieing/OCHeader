@class NSMutableArray;
@protocol IESLiveBootableModel;

@interface IESLiveComponentLoadPreloader : NSObject

@property (retain, nonatomic) id<IESLiveBootableModel> room;
@property (retain, nonatomic) NSMutableArray *loadedComponentStrArray;
@property (nonatomic) BOOL isPreloading;
@property (nonatomic) BOOL p0PreloadFinished;

- (void)recordMountComponent:(id)a0;
- (void)reloadAllPreloadedComponents;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithRoom:(id)a0;

@end
