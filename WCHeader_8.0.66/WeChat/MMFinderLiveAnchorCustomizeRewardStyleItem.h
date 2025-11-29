@class NSString, MMFinderLiveAnchorCustomizeRewardSkinItem, MMFinderLiveAnchorCustomizeRewardResourceUrl;

@interface MMFinderLiveAnchorCustomizeRewardStyleItem : NSObject

@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardSkinItem *selectedSkinItem;
@property (retain, nonatomic) NSString *customText;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *customImageResource;

- (id)initWithPBSelectedValue:(id)a0 skinItemArray:(id)a1;
- (id)initWithSelectedSkinId:(id)a0 customText:(id)a1 customImageResource:(id)a2 skinItemArray:(id)a3;
- (void).cxx_destruct;

@end
