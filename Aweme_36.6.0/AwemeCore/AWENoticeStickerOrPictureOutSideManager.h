@interface AWENoticeStickerOrPictureOutSideManager : NSObject {
    void /* unknown type, empty encoding */ noticeFromUserFriendStatusDic;
    void /* unknown type, empty encoding */ noticeFromUserFriendStatusNormalDic;
    void /* unknown type, empty encoding */ rwlock;
    void /* unknown type, empty encoding */ strategy;
}

@property (class, nonatomic, readonly) AWENoticeStickerOrPictureOutSideManager *sharedInstance;

+ (BOOL)shouldShowStickerOutSide:(id)a0;
+ (BOOL)shouldCommentNoticeShowStickerOutSide:(id)a0;
+ (BOOL)needExposedDisplayMediaDetailWithUserModel:(id)a0;
+ (id)getStickerOrPictureURL:(id)a0;
+ (struct CGSize { double x0; double x1; })getStickerOrPictureViewSize:(id)a0;
+ (id)deleteColonFromString:(id)a0 noticeModel:(id)a1;

- (BOOL)getFriendStateWithUserID:(id)a0;
- (void)clearFriendStateDic;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
