@class AWEMessageReachVerifyComponentModel, NSArray, NSDictionary, NSString;

@interface AWEMessageReachBussinessParamsModel : NSObject <NSCopying>

@property (copy, nonatomic) NSDictionary *bizBindParams;
@property (copy, nonatomic) NSArray *reqComponentsArray;
@property (copy, nonatomic) NSString *recallScene;
@property (copy, nonatomic) NSDictionary *componentDSL;
@property (retain, nonatomic) id originModel;
@property (retain, nonatomic) AWEMessageReachVerifyComponentModel *verifyComponentModel;
@property (copy, nonatomic) NSString *showComponentID;
@property (copy, nonatomic) NSString *showComponentType;
@property (copy, nonatomic) NSString *bizSource;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *triggerEvent;
@property (nonatomic) BOOL fromCache;
@property (copy, nonatomic) id /* block */ AWEMessageReachShowInterruptCallback;
@property (copy, nonatomic) id /* block */ AWEMessageReachBadgeShowCallback;
@property (copy, nonatomic) id /* block */ AWEMessageReachBadgeHideCallback;
@property (copy, nonatomic) id /* block */ AWEMessageReachBadgeDowngradeCallback;
@property (copy, nonatomic) id /* block */ AWEMessageReachBubbleShowCallback;
@property (copy, nonatomic) id /* block */ AWEMessageReachBubbleDismissCallback;
@property (copy, nonatomic) id /* block */ AWEMessageReachBubbleClickCallback;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSArray *verifyComponentList;
@property (copy, nonatomic) NSArray *componentIdList;
@property (nonatomic) unsigned long long associateType;

- (id)initWithTriggerEvent:(id)a0 source:(id)a1;
- (void)copyBizParamsModelWithOldBizModel:(id)a0 newBizModel:(id)a1;
- (id)getBizBindParamsWithChannelID:(id)a0;
- (void)addBizBindParamsWithChannelID:(id)a0 bindParams:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
