@class NSString, NSDictionary;

@interface AWELeftSideBarItemModel : MTLModel <MTLJSONSerializing, NSCopying, AWEHPListKitItemControllerModelProtocol>

@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSString *businessType;
@property (nonatomic) BOOL isDynamic;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) BOOL supportEntranceInteractiveAnimation;
@property (copy, nonatomic) NSString *moduleID;
@property (copy, nonatomic) NSString *modulePos;
@property (copy, nonatomic) NSString *moduleType;
@property (nonatomic) double cellHeight;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellLeftPadding;
@property (nonatomic) double lastSpecialTrackTimestamp;
@property (nonatomic) BOOL supportSpecialTrackClick;
@property (nonatomic) BOOL moduleShowCloseButton;
@property (nonatomic) long long moduleShowThreshold;
@property (nonatomic) unsigned long long moduleFooterStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)abstract;

@end
