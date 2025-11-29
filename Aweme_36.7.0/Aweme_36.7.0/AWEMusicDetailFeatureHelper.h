@class AWEMusicDetailDataContext;

@interface AWEMusicDetailFeatureHelper : NSObject

@property (retain, nonatomic) AWEMusicDetailDataContext *dataContext;

+ (id)helperWithDataContext:(id)a0;

- (void)trackLoginSource:(id)a0;
- (void)trackLoginNotifyIfNeededWithEvent:(id)a0;
- (void).cxx_destruct;

@end
