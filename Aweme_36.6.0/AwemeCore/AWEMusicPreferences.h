@class RxMultipleDelegate;
@protocol AWEMusicPreferencesDelegate;

@interface AWEMusicPreferences : NSObject

@property (retain, nonatomic) RxMultipleDelegate<AWEMusicPreferencesDelegate> *multipleDelegate;
@property (nonatomic) unsigned long long loopMode;

+ (id)shared;

- (void).cxx_destruct;
- (id)storage;
- (void)addObserver:(id)a0;

@end
