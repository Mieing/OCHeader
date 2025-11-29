@class NSString;

@interface AWEBizTabBarMessageItemBadgeModel : NSObject <AWEBizTabBarMessageItemBadgeModelProtocol, IESIMBizEntryBadgeInfoProtocol>

@property long long unreadCount;
@property unsigned long long badgeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBadgeModel:(id)a0;

@end
