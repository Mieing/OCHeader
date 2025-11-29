@class UIColor, NSString, NSPointerArray, UIImage, NSDictionary;

@interface AWEHPBottomTabIconTextSpecialEntryModel : AWEHPBottomTabBaseSpecialEntryModel <AWEHPBottomTabIconTextSpecialEntryProtocol>

@property (retain, nonatomic) NSPointerArray *weakEntrys;
@property (copy, nonatomic) id /* block */ handleColorConfigChangedCallback;
@property (nonatomic) long long iconPosition;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) double iconSize;
@property (retain, nonatomic) UIImage *darkIcon;
@property (retain, nonatomic) UIImage *lightIcon;
@property (retain, nonatomic) UIColor *darkTextColor;
@property (retain, nonatomic) UIColor *lightTextColor;
@property (retain, nonatomic) UIColor *darkBackgroundColor;
@property (retain, nonatomic) UIColor *lightBackgroundColor;
@property (copy, nonatomic) NSDictionary *bizTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_updateCopy:(id)a0 fromEntry:(id)a1;

@end
