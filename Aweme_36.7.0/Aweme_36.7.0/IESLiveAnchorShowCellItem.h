@class NSString;

@interface IESLiveAnchorShowCellItem : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long index;
@property (copy, nonatomic) id /* block */ deleteHandler;

- (void).cxx_destruct;

@end
