@class NSString, NSURL;

@interface RTVInviteUserCellModel : NSObject <RTVUICellModelDiffableInterface, RxPrimaryKey>

@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, nonatomic) NSURL *avatarURL;
@property (readonly, copy, nonatomic) NSString *nickName;
@property (readonly, nonatomic, getter=isOnline) BOOL online;
@property (readonly, copy, nonatomic) NSString *onlineIndicatorText;
@property (readonly, nonatomic) BOOL isSelected;
@property (nonatomic) long long lastActiveTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getInKey;
- (void)updateSelected:(BOOL)a0;
- (id)initWithUserID:(id)a0 avatarURL:(id)a1 nickName:(id)a2 selected:(BOOL)a3 activeUserInfo:(id)a4;
- (BOOL)joinDiffCalculate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
