@class NSString, NSMutableArray;

@interface WASettingAccountModel : NSObject

@property (retain, nonatomic) NSString *avatarUrl;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *detail;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) NSMutableArray *menuItemsArray;
@property (retain, nonatomic) id userInfo;

+ (id)createWithAvatarUrl:(id)a0 userName:(id)a1 detail:(id)a2 selected:(BOOL)a3 menuItemsArray:(id)a4;

- (void).cxx_destruct;

@end
