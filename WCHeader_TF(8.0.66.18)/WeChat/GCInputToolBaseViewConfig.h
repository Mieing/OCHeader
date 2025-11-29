@class NSString, UIColor;

@interface GCInputToolBaseViewConfig : NSObject

@property (retain, nonatomic) NSString *emoticonImgName;
@property (retain, nonatomic) NSString *keyboardImgName;
@property (retain, nonatomic) UIColor *backGroundBgColor;
@property (retain, nonatomic) UIColor *pubbleViewBgColor;
@property (retain, nonatomic) UIColor *growTextColor;
@property (retain, nonatomic) UIColor *placeHolderTextColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) BOOL showRecommendEmoticon;
@property (nonatomic) double growTextViewLeftMargin;
@property (nonatomic) double growTextViewFont;

+ (id)webInputToolViewConfig;
+ (id)chatRoomToolViewConfig;

- (void).cxx_destruct;

@end
