@interface EmoticonCustomCreatePreProcessConfig : NSObject

@property (nonatomic) unsigned long long autoSizeCrop;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropFrame;

- (id)init;

@end
