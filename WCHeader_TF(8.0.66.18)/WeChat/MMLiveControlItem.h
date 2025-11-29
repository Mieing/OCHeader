@class NSString;
@protocol MMLiveControlItemDelegate;

@interface MMLiveControlItem : NSObject

@property (copy, nonatomic) NSString *controlName;
@property (copy, nonatomic) NSString *controlIconName;
@property (copy, nonatomic) NSString *controlTitle;
@property (nonatomic) struct CGSize { double width; double height; } iconImageSize;
@property (nonatomic) BOOL showBadge;
@property (weak, nonatomic) id<MMLiveControlItemDelegate> delegate;

- (void).cxx_destruct;

@end
