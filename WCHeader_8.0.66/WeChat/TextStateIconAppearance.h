@class NSString, NSMutableDictionary, UIColor;

@interface TextStateIconAppearance : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *localeToIconDescriptionDict;
@property (retain, nonatomic) NSString *iconDescription;
@property (retain, nonatomic) NSMutableDictionary *localeToClusterDescriptionDict;
@property (retain, nonatomic) NSString *clusterDescription;
@property (retain, nonatomic) NSMutableDictionary *localeToOtherClusterDescriptionDict;
@property (retain, nonatomic) NSMutableDictionary *localeToMyselfAloneDescriptionDict;
@property (retain, nonatomic) NSMutableDictionary *localeToWithMeClusterDescriptionDict;
@property (retain, nonatomic) NSString *otherClusterDescription;
@property (copy, nonatomic) NSString *myselfAloneDescription;
@property (copy, nonatomic) NSString *withMeClusterDescription;
@property (retain, nonatomic) UIColor *unreadTextColor;
@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int endTime;
@property (retain, nonatomic) NSString *iconURL;
@property (retain, nonatomic) NSString *bigIconURL;
@property (retain, nonatomic) NSString *unreadTextColorString;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) unsigned int order;
@property (nonatomic) unsigned long long option;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_beginTime;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_iconURL;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_order;
+ (void)PBArrayAdd_option;
+ (void)PBArrayAdd_localeToIconDescriptionDict;
+ (void)PBArrayAdd_localeToClusterDescriptionDict;
+ (void)PBArrayAdd_localeToOtherClusterDescriptionDict;
+ (void)PBArrayAdd_bigIconURL;
+ (void)PBArrayAdd_unreadTextColorString;
+ (void)PBArrayAdd_localeToMyselfAloneDescriptionDict;
+ (void)PBArrayAdd_localeToWithMeClusterDescriptionDict;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithAction:(id)a0;
- (id)action;
- (BOOL)isQualifiedForShow;
- (BOOL)isQualifiedForPublish;
- (id)getLocalizedDescriptionFromDict:(id)a0 entity:(id)a1;
- (void)clearCachedDescription;
- (void).cxx_destruct;

@end
