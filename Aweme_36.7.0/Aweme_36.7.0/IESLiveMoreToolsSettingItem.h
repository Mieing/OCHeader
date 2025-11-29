@class NSString, UIImage, UIView;

@interface IESLiveMoreToolsSettingItem : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) BOOL contentTopAlignment;
@property (nonatomic) BOOL contentWidthAlignment;
@property (nonatomic) long long itemType;
@property (nonatomic) BOOL switchAnimated;
@property (nonatomic) BOOL on;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (retain, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ buttonTapBlock;
@property (nonatomic) long long idx;
@property (nonatomic) long long orderIdx;
@property (nonatomic) long long section;
@property (nonatomic) long long sectionOrderIdx;
@property (copy, nonatomic) NSString *sectionTitle;
@property (copy, nonatomic) id /* block */ toolbarItemShowBlock;
@property (copy, nonatomic) id /* block */ toolbarItemTapBlock;
@property (retain, nonatomic) NSString *toolbarItemTitle;
@property (nonatomic) BOOL enable;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemTopMargin;
@property (copy, nonatomic) id /* block */ notesIconClickBlock;
@property (nonatomic) BOOL enableShowNotesIcon;
@property (retain, nonatomic) UIImage *notesIcon;
@property (nonatomic) BOOL isButtonTopCenter;
@property (retain, nonatomic) UIView *attachedView;

- (void).cxx_destruct;
- (id)init;

@end
