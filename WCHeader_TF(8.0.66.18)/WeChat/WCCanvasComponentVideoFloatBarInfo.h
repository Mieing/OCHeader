@class NSString, WCCanvasComponentItem;

@interface WCCanvasComponentVideoFloatBarInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *descText;
@property (retain, nonatomic) NSString *descColor;
@property (nonatomic) BOOL isFullClickable;
@property (retain, nonatomic) WCCanvasComponentItem *actionButton;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
