@class AWEProfileExtensionAreaCardModel, NSString, UIImageView, NSDictionary, UIView, AWEUserModel;
@protocol HTSKVStore;

@interface AWELiveMomentUserProfileExtensionController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (nonatomic) unsigned long long cardIndex;
@property (retain, nonatomic) UIView *cardView;
@property (nonatomic) BOOL isClick;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) id<HTSKVStore> kvStore;
@property (copy, nonatomic) NSDictionary *extraInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2;
+ (id)cardControllerWithUserModel:(id)a0 cardModel:(id)a1 cardIndex:(unsigned long long)a2 extraInfo:(id)a3 reloadCardListBlock:(id /* block */)a4;
+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2 extraInfoDict:(id)a3;

- (void)cardWillAppear;
- (double)widthOfCard;
- (void)trackEntranceShow;
- (void)didClickEntrance;
- (double)widthOfTitle:(double)a0 title:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)updateIcon;

@end
