@class NSString, AWEEcomSearchBarView;

@interface AWEEcomSearchBarViewDirector : NSObject <AWEEcomSearchEventSubscriber>

@property (nonatomic) unsigned long long ecomSearchBarType;
@property (weak, nonatomic) AWEEcomSearchBarView *barView;
@property (nonatomic) long long uiThemeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveBarViewDirector:(id)a0;
+ (id)defaultBarViewDirector:(id)a0;

- (void)moveToPage:(long long)a0 fromPage:(long long)a1;
- (id)initWithBarView:(id)a0;
- (void)initStat:(long long)a0;
- (void)updateThemeForChange:(long long)a0;
- (void)privacyStateChanged:(id)a0;
- (void)updateSearchBarType:(unsigned long long)a0;
- (void)updateShowMoreIconWithPage:(long long)a0;
- (void).cxx_destruct;

@end
