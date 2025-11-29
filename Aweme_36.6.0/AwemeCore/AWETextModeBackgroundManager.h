@class NSString, NSMutableArray;
@protocol ACCTextModeBackgroundModelProtocol;

@interface AWETextModeBackgroundManager : NSObject <ACCTextModeBackgroundManagerProtocol>

@property (retain, nonatomic) id<ACCTextModeBackgroundModelProtocol> currentBackground;
@property (retain, nonatomic) NSMutableArray *backgrounds;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long randomIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchToNext;
- (void)loadBackgrounds;
- (void)p_initSelectedIndex;
- (void)preloadInitBackground;
- (void)fetchAllBackgrounds;
- (void)savedCurrentBackground;
- (long long)currentIndex;
- (void).cxx_destruct;
- (id)init;

@end
