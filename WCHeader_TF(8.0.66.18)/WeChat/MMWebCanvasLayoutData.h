@class NSString;

@interface MMWebCanvasLayoutData : MMObject <PBCoding>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (copy, nonatomic) NSString *layoutStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_frame;
+ (void)PBArrayAdd_layoutStr;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
