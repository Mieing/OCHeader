@class NSMutableSet;

@interface AWEECTrendGoodsEntranceManager : NSObject

@property (class, readonly, nonatomic) AWEECTrendGoodsEntranceManager *shared;

@property (retain, nonatomic) NSMutableSet *awemeIDBottomBarTappedSet;
@property (retain, nonatomic) NSMutableSet *awemeIDTopBarShowedSet;

- (void)removeCommentTopBarShowedWithAwemeID:(id)a0;
- (BOOL)getCommentTopBarShowedWithAwemeID:(id)a0;
- (void)setVideoBottomBarTappedWithAwemeID:(id)a0;
- (BOOL)getVideoBottomBarTappedWithAwemeID:(id)a0;
- (void)setCommentTopBarShowedWithAwemeID:(id)a0;
- (void).cxx_destruct;

@end
