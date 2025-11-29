@class MMLiveBeautyBadgeItem, NSString, NSArray, MMLiveBeautyBadgeCollection;

@interface MMLiveMakeupDataItem : NSObject

@property (retain, nonatomic) NSString *makeupId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *coverColorString;
@property (retain, nonatomic) NSString *effectMaterialsFolderPath;
@property (nonatomic) unsigned long long order;
@property (retain, nonatomic) NSArray *makeupDetailItems;
@property (retain, nonatomic) MMLiveBeautyBadgeItem *badge;
@property (retain, nonatomic) MMLiveBeautyBadgeCollection *itemBadges;
@property (readonly, nonatomic) BOOL effective;
@property (readonly, nonatomic) NSString *makeupValueSaveKey;

+ (id)defaultNoopItem;

- (id)init;
- (id)filterValueSaveKey;
- (void)setDetailValueDefault;
- (void).cxx_destruct;

@end
