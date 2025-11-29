@class NSString, NSDictionary;

@interface AWEECOMIMQuickEntryItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *configNameEng;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *cardType;
@property (nonatomic) unsigned long long redDotType;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) NSDictionary *viewTrackInfo;
@property (copy, nonatomic) NSDictionary *clickTrackInfo;
@property (copy, nonatomic) NSString *btmCDID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)quickEntryItemKey;
- (void).cxx_destruct;

@end
