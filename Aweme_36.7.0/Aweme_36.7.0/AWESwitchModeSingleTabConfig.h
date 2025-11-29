@class AWESwitchModeSingleTabCustomImageConfig, NSString, ACCRecordMode, NSArray;

@interface AWESwitchModeSingleTabConfig : NSObject

@property (readonly, nonatomic) long long recordModeId;
@property (weak, nonatomic) ACCRecordMode *mode;
@property (nonatomic) BOOL supportLightTheme;
@property (nonatomic) BOOL showRedDot;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL regularIcon;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *info;
@property (copy, nonatomic) NSArray *imageURLArray;
@property (copy, nonatomic) NSString *topRightTipText;
@property (nonatomic) double cellGapPadding;
@property (copy, nonatomic) id /* block */ customizeBadge;
@property (retain, nonatomic) AWESwitchModeSingleTabCustomImageConfig *customImageConfig;

- (void).cxx_destruct;

@end
