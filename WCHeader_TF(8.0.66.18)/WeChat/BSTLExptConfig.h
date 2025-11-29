@interface BSTLExptConfig : NSObject

@property (nonatomic) unsigned int exptShowOption;
@property (nonatomic) BOOL showDynamicCard;
@property (nonatomic) BOOL showDynamicCardToast;
@property (nonatomic) unsigned long long resortSceneBitSwitch;

- (BOOL)isExptNotShowAd;
- (BOOL)isExptNotShowRecCard;
- (BOOL)isExptNotShowFinderLiveBar;
- (BOOL)isExptNotShowRecoFlow;
- (id)getExptExcludeMsgTypeArr;
- (BOOL)isEqualToConfig:(id)a0;
- (id)description;

@end
