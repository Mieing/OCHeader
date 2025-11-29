@class UINavigationController, NSString, UIViewController, NSData, WCFinderDataItem, WCFinderShareItemInfo;

@interface WCFinderTopicRouteParams : WCFinderTopicListParams

@property (nonatomic) int cardType;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) int feedActionType;
@property (nonatomic) unsigned long long shareScene;
@property (nonatomic) int entryScene;
@property (copy, nonatomic) NSString *adExtInfo;
@property (retain, nonatomic) WCFinderShareItemInfo *shareItemInfo;
@property (nonatomic) int commentScene;
@property (nonatomic) unsigned long long streamEntranceType;
@property (retain, nonatomic) NSData *byPassInfo;
@property (weak, nonatomic) UINavigationController *navVC;
@property (weak, nonatomic) UIViewController *fromVC;
@property (nonatomic) BOOL showHalfScreen;
@property (nonatomic) BOOL showHighlightTopicStyle;
@property (nonatomic) unsigned int preSelectFilterType;
@property (nonatomic) int musicPageType;
@property (nonatomic) unsigned long long sourcePosition;
@property (copy, nonatomic) NSString *feedIdToBePostToComment;
@property (copy, nonatomic) NSString *templateTopicId;
@property (retain, nonatomic) NSData *topicInfoPassbuff;
@property (nonatomic) int getTopicInfoFlag;
@property (retain, nonatomic) NSString *jumpInfoToPoiStreamBypass;

+ (id)tagTopicWithName:(id)a0 commentScene:(int)a1;
+ (id)poiTopicWithDataItem:(id)a0 commentScene:(int)a1;
+ (id)musicTopicWithDataItem:(id)a0 commentScene:(int)a1;
+ (id)eventTopicWithEventInfo:(id)a0 commentScene:(int)a1;
+ (id)musicTopicWithWithEventInfo:(id)a0 commentScene:(int)a1;
+ (id)eventTopicWithEncryptedId:(id)a0 eventName:(id)a1 commentScene:(int)a2;
+ (id)eventTopicWithEncryptedId:(id)a0 eventDelegate:(id)a1 commentScene:(int)a2;
+ (id)eventTopicWithEventId:(unsigned long long)a0 commentScene:(int)a1;
+ (id)eventMusicTopicWithMusicId:(unsigned long long)a0 commentScene:(int)a1 sourceType:(unsigned long long)a2;
+ (id)eventMusicTopicWithPatTopic:(id)a0 commentScene:(int)a1 sourceType:(unsigned long long)a2;
+ (id)poiTopicWithPoiParams:(id)a0 commentScene:(int)a1;

- (id)init;
- (void)setLocation:(id)a0;
- (void).cxx_destruct;

@end
