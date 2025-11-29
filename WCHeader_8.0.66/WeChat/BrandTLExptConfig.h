@interface BrandTLExptConfig : NSObject

@property (nonatomic) unsigned int renderMode;
@property (nonatomic) unsigned int dataMode;
@property (nonatomic) unsigned int exptShowOption;
@property (nonatomic) BOOL showDynamicCard;
@property (nonatomic) BOOL showDynamicCardToast;
@property (nonatomic) BOOL isControlGroup;
@property (nonatomic) unsigned long long resortSceneBitSwitch;
@property (nonatomic) BOOL enablePOIPrefetch;
@property (nonatomic) long long enterTimeMs;

- (BOOL)isExptOrControlGroup;
- (BOOL)isExptNotShowAd;
- (BOOL)isExptNotShowRecCard;
- (BOOL)isExptNotShowFinderLiveBar;
- (BOOL)isExptNotShowRecoFlow;
- (id)getExptExcludeMsgTypeArr;
- (BOOL)isEqualToConfig:(id)a0;
- (id)description;

@end
