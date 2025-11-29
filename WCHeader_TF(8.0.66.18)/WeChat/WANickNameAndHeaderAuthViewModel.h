@class WANicknameAndHeadAuthorizeSheetInfo, NSMutableArray;
@protocol IWANicknameAndHeadAuthorizePageSheet;

@interface WANickNameAndHeaderAuthViewModel : WAAuthPageSheetViewModel

@property (weak, nonatomic) id<IWANicknameAndHeadAuthorizePageSheet> pageSheet;
@property (retain, nonatomic) WANicknameAndHeadAuthorizeSheetInfo *infoModel;
@property (retain, nonatomic) NSMutableArray *avatarList;
@property (copy, nonatomic) id /* block */ scrollToAvatarAction;
@property (nonatomic) double maxListHeight;

- (void).cxx_destruct;

@end
