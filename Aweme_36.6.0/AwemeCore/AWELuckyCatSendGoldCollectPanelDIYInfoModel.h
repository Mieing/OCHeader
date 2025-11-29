@class NSString;

@interface AWELuckyCatSendGoldCollectPanelDIYInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL canDIY;
@property (nonatomic) long long DIYLimitScoreAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
