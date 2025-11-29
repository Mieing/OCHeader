@class UIColor, NSString, NSArray, NSMutableSet;

@interface WCMomentsPrivacyItem : NSObject

@property (retain, nonatomic) NSMutableSet *selectedContacts;
@property (retain, nonatomic) NSMutableSet *selectedContactTags;
@property (nonatomic) BOOL isAllContactsSelected;
@property (readonly, nonatomic) unsigned long long itemType;
@property (nonatomic) long long privacy;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSMutableSet *contacts;
@property (retain, nonatomic) NSMutableSet *contactTags;
@property (nonatomic) BOOL isAllContactSelectedWhenInit;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSString *selectContactDescription;
@property (retain, nonatomic) NSString *selectContactTagDescription;
@property (copy, nonatomic) NSString *selectAllContactsDescription;
@property (retain, nonatomic) NSArray *componentArray;

+ (id)selectTagTitle;
+ (id)selectContactTitle;
+ (id)selectAllContactsTitle;

- (double)cellHeightWithWidth:(double)a0;
- (double)selectTagCellHeightWithWidth:(double)a0;
- (double)selectContactCellHeightWithWidth:(double)a0;
- (double)selectAllContactsCellHeightWithWidth:(double)a0;
- (id)initWithItemType:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
