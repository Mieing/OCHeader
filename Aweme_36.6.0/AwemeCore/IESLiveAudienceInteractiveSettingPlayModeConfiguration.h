@class NSArray, NSString, IESLiveAnchorInteractiveGameItem;

@interface IESLiveAudienceInteractiveSettingPlayModeConfiguration : NSObject

@property (nonatomic) int type;
@property (copy, nonatomic) NSArray *iconURLs;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) id /* block */ didClick;
@property (copy, nonatomic) id /* block */ didShow;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) int listDataType;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameItem *item;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) BOOL shouldShowRedDot;
@property (nonatomic) BOOL isPlaying;
@property (copy, nonatomic) NSString *gameModeReddotIdentifier;
@property (nonatomic) BOOL isDynamic;
@property (copy, nonatomic) NSString *schema;

- (void).cxx_destruct;
- (id)init;

@end
