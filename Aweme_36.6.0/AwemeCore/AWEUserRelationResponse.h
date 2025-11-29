@class NSString, AWEUserFollowUnreadFooter, AWECodeGenFunctionBanPopupModel;

@interface AWEUserRelationResponse : NSObject

@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *contactName;
@property (copy, nonatomic) NSString *mobileKey;
@property (nonatomic) BOOL isEnterprise;
@property (nonatomic) BOOL isFirstFollow;
@property (retain, nonatomic) AWEUserFollowUnreadFooter *unreadFooter;
@property (retain, nonatomic) AWECodeGenFunctionBanPopupModel *popupConfig;

+ (id)instanceWithBlock:(id /* block */)a0;

- (id)initWithFollowStatus:(long long)a0 contactName:(id)a1 isEnterprise:(BOOL)a2 isFirstFollow:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;
- (id)initWithBlock:(id /* block */)a0;

@end
