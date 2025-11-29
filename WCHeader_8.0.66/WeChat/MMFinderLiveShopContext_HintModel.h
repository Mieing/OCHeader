@class MMFinderLiveShopContext, MMFinderLiveShopShelfHintInfo;

@interface MMFinderLiveShopContext_HintModel : NSObject

@property (weak, nonatomic) MMFinderLiveShopContext *context;
@property (retain, nonatomic) MMFinderLiveShopShelfHintInfo *nextHint;

- (id)initWithContext:(id)a0;
- (id)history;
- (void)updateWithShopShelfInfo:(id)a0;
- (void)willShowHint:(id)a0;
- (void).cxx_destruct;

@end
