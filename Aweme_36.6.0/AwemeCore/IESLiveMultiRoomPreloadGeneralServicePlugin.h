@class IESLiveGeneralServiceManager;

@interface IESLiveMultiRoomPreloadGeneralServicePlugin : IESLiveMultiRoomPreloadBasePlugin

@property (retain, nonatomic) IESLiveGeneralServiceManager *generalServiceManager;

- (void)loadWithContextPlugin:(id)a0;
- (id)getGeneralServiceManager:(BOOL)a0;
- (void).cxx_destruct;
- (void)clear;

@end
