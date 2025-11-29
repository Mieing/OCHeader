@class NSString;
@protocol LunaCycleViewItemProtocol;

@interface LunaCyclePageItem : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) id<LunaCycleViewItemProtocol> item;
@property (retain, nonatomic) id model;
@property (copy, nonatomic) NSString *identifier;

- (void)attachModel;
- (void).cxx_destruct;
- (void)reset;

@end
