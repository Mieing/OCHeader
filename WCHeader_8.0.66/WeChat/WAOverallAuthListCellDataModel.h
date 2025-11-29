@class WAContact, WAAuthorizationItemData;

@interface WAOverallAuthListCellDataModel : NSObject

@property (retain, nonatomic) WAAuthorizationItemData *authItem;
@property (retain, nonatomic) WAContact *contact;

+ (id)createByAuthItem:(id)a0 contact:(id)a1;

- (void).cxx_destruct;

@end
