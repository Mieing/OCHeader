@class NSString;

@interface LynxMarkdownLink : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) long long index;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

- (void).cxx_destruct;

@end
