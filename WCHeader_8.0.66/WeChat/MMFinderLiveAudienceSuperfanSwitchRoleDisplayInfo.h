@class NSString, FinderLiveBadgeInfo;

@interface MMFinderLiveAudienceSuperfanSwitchRoleDisplayInfo : NSObject

@property (retain, nonatomic) NSString *nick;
@property (nonatomic) long long aliasType;
@property (retain, nonatomic) NSString *headUrl;
@property (nonatomic) BOOL isCurrentRole;
@property (retain, nonatomic) FinderLiveBadgeInfo *superfanBadge;

+ (id)infoWithNick:(id)a0 headUrl:(id)a1 aliasType:(long long)a2 isCurrentRole:(BOOL)a3 superfanBadge:(id)a4;

- (id)getAliasDesc;
- (void).cxx_destruct;

@end
