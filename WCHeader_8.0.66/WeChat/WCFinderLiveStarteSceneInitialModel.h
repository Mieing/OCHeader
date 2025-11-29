@class BubbleCreateLiveAnchorStatusConfig, NSString, NSMutableDictionary, NSData, FinderLiveTagInfo, FinderLiveModeInfo;

@interface WCFinderLiveStarteSceneInitialModel : NSObject

@property (retain, nonatomic) FinderLiveModeInfo *initialLiveModeInfo;
@property (retain, nonatomic) FinderLiveTagInfo *liveTagInfo;
@property (retain, nonatomic) NSString *descriptionStr;
@property (retain, nonatomic) NSString *descriptionExtend;
@property (nonatomic) long long liveMode;
@property (retain, nonatomic) NSString *gameAppId;
@property (retain, nonatomic) BubbleCreateLiveAnchorStatusConfig *anchorStatusConfig;
@property (retain, nonatomic) NSMutableDictionary *chnlextraDictionary;
@property (retain, nonatomic) NSData *createLiveBubbleBuffer;
@property (nonatomic) unsigned long long eventTopicId;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *eventCreatorNickName;

- (id)description;
- (unsigned long long)openCamera;
- (id)currentBulletinInfo;
- (void)cleanBulletinInfo;
- (void).cxx_destruct;

@end
