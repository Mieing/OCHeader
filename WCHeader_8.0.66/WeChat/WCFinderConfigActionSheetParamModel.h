@interface WCFinderConfigActionSheetParamModel : NSObject

@property (nonatomic) BOOL isAuthor;
@property (nonatomic) BOOL hasDislike;
@property (nonatomic) BOOL isNeedSticyTop;
@property (nonatomic) BOOL collectionFlag;
@property (nonatomic) BOOL hiddenDeleteItem;
@property (nonatomic) BOOL allowModMentionedDisplayStatus;
@property (nonatomic) unsigned long long viewerScene;

- (id)initWithViewerScene:(unsigned long long)a0;

@end
