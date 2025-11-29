@class NSString, NSURL;

@interface RTVInviteGroupCellModel : NSObject <RxPrimaryKey, RTVUICellModelDiffableInterface>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *avatarURL;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) long long lastActiveTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getInKey;
- (void)updateSelected:(BOOL)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 avatarURL:(id)a2 selected:(BOOL)a3;
- (BOOL)joinDiffCalculate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
