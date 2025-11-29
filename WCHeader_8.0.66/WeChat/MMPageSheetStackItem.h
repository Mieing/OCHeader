@class UIView;
@protocol MMPageSheetContentProtocol;

@interface MMPageSheetStackItem : NSObject

@property (nonatomic) long long style;
@property (weak, nonatomic) id<MMPageSheetContentProtocol> pageSheet;
@property (retain, nonatomic) UIView *bottomExtendView;
@property (retain, nonatomic) UIView *frontMaskView;

- (void)updateWithStyle:(long long)a0 multiPage:(BOOL)a1 animated:(BOOL)a2;
- (void).cxx_destruct;

@end
