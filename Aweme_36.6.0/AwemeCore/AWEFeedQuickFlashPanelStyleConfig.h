@class NSDictionary, NSString;

@interface AWEFeedQuickFlashPanelStyleConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL bottomTransparent;
@property (nonatomic) double panelHeightRatio;
@property (nonatomic) BOOL showFlashIcon;
@property (nonatomic) BOOL useModernTitle;
@property (nonatomic) BOOL showCloseBtn;
@property (nonatomic) BOOL showRankListBtn;
@property (copy, nonatomic) NSDictionary *rankListStyle;
@property (nonatomic) long long numberOfTopicRows;
@property (nonatomic) BOOL showMoreTopicIcon;
@property (nonatomic) BOOL showItemFlashAvatar;
@property (nonatomic) BOOL showItemFlashTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorWithARGBString:(id)a0;
+ (id)defaultConfig;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)useModernRankListStyle;
- (void).cxx_destruct;

@end
