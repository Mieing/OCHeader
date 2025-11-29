@class NSString, NSDictionary;
@protocol AWEHomePageBubbleContentConfigProtocol;

@interface AWEHPChannelBubbleModel : AWEHPBaseComponentModel <NSCopying, AWEHPChannelBubbleModelProtocol>

@property (retain, nonatomic) id<AWEHomePageBubbleContentConfigProtocol> contentConfig;
@property (nonatomic) double showDuration;
@property (nonatomic) BOOL needCover;
@property (nonatomic) BOOL clickAble;
@property (nonatomic) BOOL autoSwitchTab;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) unsigned long long bubbleEntranceType;
@property (copy, nonatomic) NSString *cornerId;
@property (nonatomic) double pendingTime;
@property (retain, nonatomic) NSDictionary *interceptedParams;
@property (nonatomic) BOOL preCheck;
@property (nonatomic) BOOL mrTask;
@property (nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *componentID;

@end
