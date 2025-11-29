@class NSString;

@interface FMPLastViewInfo : NSObject

@property (retain, nonatomic) NSString *nodeTag;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewRect;
@property (nonatomic) long long diffType;
@property (retain, nonatomic) NSString *viewTag;

- (void).cxx_destruct;

@end
