@class NSString, NSDate;

@interface AWEPOILeftInteractionElementManager : NSObject <AWEPOIFeedElementManagerProtocol>

@property (nonatomic) long long todayCollectShowedCount;
@property (nonatomic) long long totalCollectShowedCount;
@property (copy, nonatomic) NSDate *noMoreShowStartDate;
@property (copy, nonatomic) NSString *showedItemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (long long)todayCountOfShowPOICollectElement;
- (BOOL)hasContainInNoMoreShowPOICollectElementWithMaxDay:(long long)a0;
- (BOOL)hasContainInTodayShowedListWithItemId:(id)a0;
- (void)clearTotalCountOfShowPOICollectElement;
- (void)increaseCountOfShowPOICollectElementWithItemId:(id)a0;
- (long long)totalCountOfShowPOICollectElement;
- (void)saveCurrentDateNoMoreShowCollectElement;
- (BOOL)needFeedPOIAnchorLargeFontAdaptation;
- (struct CGSize { double x0; double x1; })feedPOIAnchorAdaptiveIconSizeWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)feedPOIAnchorAdaptiveFontWithFontSize:(double)a0 weight:(long long)a1;
- (id)p_hasShowPOICollectElementCountKey;
- (void).cxx_destruct;
- (id)init;

@end
