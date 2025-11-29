@class NSString, MMLiveBeautyBadgeItem;

@interface MMLiveFilterDataItem : NSObject

@property (retain, nonatomic) NSString *filterId;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) float defaultValue;
@property (retain, nonatomic) NSString *filterFilePath;
@property (retain, nonatomic) NSString *coverColorString;
@property (nonatomic) unsigned long long order;
@property (retain, nonatomic) MMLiveBeautyBadgeItem *badge;
@property (readonly, nonatomic) BOOL effective;
@property (nonatomic) float value;
@property (readonly, nonatomic) NSString *saveKey;
@property (readonly, nonatomic) BOOL canSetValue;

+ (id)defaultNoopItem;

- (id)init;
- (void).cxx_destruct;

@end
