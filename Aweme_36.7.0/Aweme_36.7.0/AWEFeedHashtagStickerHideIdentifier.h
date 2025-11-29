@class NSDictionary, AWEPageContext;

@interface AWEFeedHashtagStickerHideIdentifier : NSObject

@property (copy, nonatomic) NSDictionary *hiddenAweme;
@property (retain, nonatomic) AWEPageContext *feedPageContext;

+ (id)sharedInstance;

- (void)addIdToHiddenAwemeWithAwemeId:(id)a0;
- (BOOL)hashtagStickerIsHiddenWithAwemeId:(id)a0;
- (void).cxx_destruct;

@end
