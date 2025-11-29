@class NSString, NSDictionary;

@interface AWEDoubleColumnSearchMerchandiseControlInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hideUserWindowBottomLine;
@property (nonatomic) BOOL hasLynxLongPressAbility;
@property (copy, nonatomic) NSString *jumpDestination;
@property (copy, nonatomic) NSString *outPlayType;
@property (copy, nonatomic) NSString *replayVideoStartTime;
@property (copy, nonatomic) NSDictionary *cardProtocolType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
