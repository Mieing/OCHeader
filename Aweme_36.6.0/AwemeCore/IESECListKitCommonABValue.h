@class NSString;

@interface IESECListKitCommonABValue : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hideVideoDesc;
@property (nonatomic) BOOL liveCardEnlargePlayArea;
@property (nonatomic) BOOL liveCardShowTitle;
@property (nonatomic) BOOL coinLabelStyle;
@property (nonatomic) BOOL liveCardShowPeopleNewIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
