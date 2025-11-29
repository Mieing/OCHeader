@class NSMutableDictionary, NSMapTable;

@interface AWEMessageReachStatistics : NSObject

@property (retain, nonatomic) NSMutableDictionary *channelInfoMap;
@property (retain, nonatomic) NSMapTable *feedControllerMap;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)weakAttachFeedController:(id)a0 referString:(id)a1;
- (void)setIsViewAppearing:(BOOL)a0 channelID:(id)a1;
- (BOOL)hasChannelAppearing;
- (BOOL)isViewAppearingForChannelID:(id)a0;
- (id)channelInfoForChannelID:(id)a0;
- (id)currentAppearingFeedController;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
