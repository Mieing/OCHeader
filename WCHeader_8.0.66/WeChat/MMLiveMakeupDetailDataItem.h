@class NSString, MMLiveBeautyBadgeItem;

@interface MMLiveMakeupDetailDataItem : NSObject

@property (retain, nonatomic) NSString *detailId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *coverColorString;
@property (nonatomic) unsigned long long order;
@property (retain, nonatomic) NSString *effectMaterialsFolderPath;
@property (nonatomic) unsigned long long objectType;
@property (nonatomic) float defaultValue;
@property (retain, nonatomic) NSString *iconPath;
@property (retain, nonatomic) NSString *saveKey;
@property (retain, nonatomic) MMLiveBeautyBadgeItem *badge;
@property (readonly, nonatomic) BOOL isMakeupFilter;
@property (nonatomic) float value;

- (void).cxx_destruct;

@end
