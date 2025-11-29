@class UIFont, NSString, UIColor, UIImage, UIView, NSMutableArray;
@protocol AWEShareItemDelegate;

@interface AWEShareItem : NSObject

@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL hasDisappeared;
@property (retain, nonatomic) NSMutableArray *eventsWithHandlers;
@property (readonly, copy, nonatomic) NSString *shareType;
@property (nonatomic) unsigned long long style;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double titleFontSize;
@property (nonatomic) double titleHeight;
@property (retain, nonatomic) UIFont *itemTitleFont;
@property (nonatomic) double itemImageHeight;
@property (retain, nonatomic) UIColor *itemTitleColor;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *smallImage;
@property (retain, nonatomic) UIImage *bottomCenterImage;
@property (copy, nonatomic) NSString *imageURL;
@property (retain, nonatomic) UIColor *imageBgColor;
@property (nonatomic) struct CGSize { double width; double height; } smallIconSize;
@property (nonatomic) BOOL showsBadgeOnImage;
@property (nonatomic) BOOL shouldBubbleAnimate;
@property (copy, nonatomic) id /* block */ bubbleAnimations;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIView *customBottomView;
@property (weak, nonatomic) id<AWEShareItemDelegate> delegate;

- (void)registerHandler:(id /* block */)a0 forEvents:(unsigned long long)a1;
- (void)sendEvents:(unsigned long long)a0 withView:(id)a1;
- (void)notifyDelegateWithEvents:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithType:(id)a0;

@end
