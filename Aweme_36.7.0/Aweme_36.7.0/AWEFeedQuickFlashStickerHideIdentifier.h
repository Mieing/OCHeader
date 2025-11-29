@class NSDictionary, AWEPageContext;

@interface AWEFeedQuickFlashStickerHideIdentifier : NSObject

@property (copy, nonatomic) NSDictionary *hiddenAweme;
@property (retain, nonatomic) AWEPageContext *feedPageContext;

+ (id)sharedInstance;

- (void)addIdToHiddenAwemeWithAwemeId:(id)a0;
- (BOOL)quickFlashStickerIsHiddenWithAwemeId:(id)a0;
- (void).cxx_destruct;

@end
