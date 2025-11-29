@class AWEIMFansGroupCouponModel, NSDictionary, NSString;

@interface AWEIMFansGroupCouponMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (retain, nonatomic) AWEIMFansGroupCouponModel *couponModel;
@property (copy, nonatomic) NSDictionary *contentDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)expireTimeFrom:(id)a0;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (unsigned long long)couponType;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)getContentDictForModel;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
