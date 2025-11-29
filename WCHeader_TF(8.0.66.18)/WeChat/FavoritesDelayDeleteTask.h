@class MMSnackBar;

@interface FavoritesDelayDeleteTask : NSObject

@property (retain, nonatomic) id deleteObject;
@property (nonatomic) unsigned long long showSnackBarTime;
@property (retain, nonatomic) MMSnackBar *snackBar;
@property (copy, nonatomic) id /* block */ onDeleteFinish;
@property (copy, nonatomic) id /* block */ onHideObject;
@property (copy, nonatomic) id /* block */ onShowObject;

+ (void)deleteFavoritesObject:(id)a0;

- (void)updateDeleteObject:(id)a0;
- (void)start;
- (void)cancel;
- (void)commit;
- (void)hideFavoritesObject:(id)a0;
- (void)showFavoritesObject:(id)a0;
- (id)getDeleteTipsForItemType:(id)a0;
- (void)showSnackBarTips;
- (void)reportSnackBar:(unsigned char)a0 item:(id)a1;
- (double)getDelayDuration;
- (void)hideSnackBar;
- (id)getFavoritesItem;
- (unsigned int)getLocalId;
- (id)getTitle;
- (void).cxx_destruct;

@end
