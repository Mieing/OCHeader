@class NSString;

@interface WCFinderPostActionSheetConfigModel : NSObject <PBCoding>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *universalLink;
@property (copy, nonatomic) NSString *appstoreScheme;
@property (copy, nonatomic) NSString *extInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_icon;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_value;
+ (void)PBArrayAdd_universalLink;
+ (void)PBArrayAdd_appstoreScheme;
+ (void)PBArrayAdd_extInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithPostActionSheetConfig:(id)a0;
- (void).cxx_destruct;

@end
