@interface AWELivePreStreamElementGroup : NSObject

- (id)nameListForContainersWithScene:(unsigned long long)a0;
- (id)nameListForElementsInContainer:(id)a0 scene:(unsigned long long)a1 referString:(id)a2;
- (id)containerNameListForFeedPreStream;
- (id)containerNameListForAFDPreStream;
- (id)containerNameListForDetailPreStream;
- (id)containerNameListForNearbyCardPreStream;
- (id)containerNameListForInnerFeedPreStream;
- (id)nameListForFunctionContainer;
- (id)elementNameListForFeedPreStream;
- (id)elementNameListForAFDPreStream;
- (id)elementNameListForDetailPreStream;
- (id)elementNameListForNearbyCardPreStream;
- (id)elementNameListForInnerFeedPreStream;
- (BOOL)isLegouNewPreStreamRefer:(id)a0;
- (id)elementNameListForLegouFeedPreStream;
- (id)nameListForElementInFunctionContainer;

@end
