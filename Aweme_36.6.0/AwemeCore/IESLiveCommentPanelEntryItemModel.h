@class UIImage, NSString;

@interface IESLiveCommentPanelEntryItemModel : NSObject

@property (nonatomic) int type;
@property (nonatomic) long long guideTipShowTimes;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *schemaURL;
@property (readonly, nonatomic) BOOL enableGuideTip;
@property (readonly, nonatomic) int componentType;
@property (nonatomic) BOOL entryHasClicked;
@property (nonatomic) BOOL entryHasShowed;

- (id)initWithDIContext:(id)a0 componentType:(int)a1;
- (void).cxx_destruct;

@end
