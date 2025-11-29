@class AWEIMMixedImageUserInfo, AWEIMUser, NSString;

@interface AWEIMMixLoraUserCellViewModel : AWEIMMixLoraUserCellModel

@property (retain, nonatomic) AWEIMMixedImageUserInfo *info;
@property (retain, nonatomic) AWEIMUser *user;
@property (copy, nonatomic) NSString *cid;

- (void)setLoraImageURL:(id)a0;
- (id)initWithUID:(id)a0 loraImageURL:(id)a1 cid:(id)a2;
- (id)initWithUserID:(id)a0 cid:(id)a1;
- (id)initWithMixUserInfo:(id)a0 cid:(id)a1;
- (void)p_fetchUsersInfo:(id)a0;
- (void).cxx_destruct;
- (void)fetchImageWithURL:(id)a0;

@end
