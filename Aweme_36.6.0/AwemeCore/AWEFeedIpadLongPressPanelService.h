@class NSString;

@interface AWEFeedIpadLongPressPanelService : HTSService <AWEFeedIpadLongPressPanelService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;

- (id)aAWEPadBizUIAdapter;
- (id)createLongPressPanelForPadWithModel:(id)a0 configuration:(id)a1;
- (id)createMorePanelWithModel:(id)a0 configuration:(id)a1;
- (double)sheetWidthForViewController:(id)a0;
- (double)sheetToppadding;
- (id)iPadAutoPlayViewModel;
- (id)iPadPiPViewModel;

@end
