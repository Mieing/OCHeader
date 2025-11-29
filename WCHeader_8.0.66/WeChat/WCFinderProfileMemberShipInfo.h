@class NSString, UIColor;

@interface WCFinderProfileMemberShipInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *iconName;
@property (retain, nonatomic) UIColor *iconColor;
@property (nonatomic) unsigned long long memberShipStatus;
@property (nonatomic) unsigned long long visitorStatus;
@property (nonatomic) BOOL isBlocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_summary;
+ (void)PBArrayAdd_iconName;
+ (void)PBArrayAdd_memberShipStatus;
+ (void)PBArrayAdd_visitorStatus;
+ (void)PBArrayAdd_isBlocked;
+ (void)initialize;
+ (id)fromMemberShipResponse:(id)a0;
+ (id)formatSummaryTitle:(id)a0;
+ (id)formatIconName:(unsigned long long)a0;
+ (id)formatIconColor:(unsigned long long)a0;

- (id)getPBPropertyTable;
- (BOOL)isEqualToMemberShipInfo:(id)a0;
- (void).cxx_destruct;

@end
