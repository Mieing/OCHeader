@class WCFinderBulletItem, WCFinderFeedContentVM;

@interface WCFinderBulletMoreActionSheetParams : NSObject

@property (retain, nonatomic) WCFinderBulletItem *item;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) BOOL isInBlackList;
@property (nonatomic) BOOL isAuthorScene;
@property (nonatomic) int scene;
@property (copy, nonatomic) id /* block */ onClose;
@property (copy, nonatomic) id /* block */ onDelete;
@property (copy, nonatomic) id /* block */ onReport;
@property (copy, nonatomic) id /* block */ onBlock;
@property (copy, nonatomic) id /* block */ onRemoveBlock;

- (void).cxx_destruct;

@end
