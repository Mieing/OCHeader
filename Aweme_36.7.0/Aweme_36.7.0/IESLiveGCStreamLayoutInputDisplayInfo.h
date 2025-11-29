@class NSString, NSArray;

@interface IESLiveGCStreamLayoutInputDisplayInfo : NSObject

@property (copy, nonatomic) NSString *displayID;
@property (nonatomic) struct { unsigned long long viewRepresentationType; unsigned long long containerType; unsigned long long businessScene; NSString *rawDisplayID; } parsedDisplayID;
@property (nonatomic) struct CGSize { double width; double height; } canvas;
@property (nonatomic) unsigned long long fitType;
@property (nonatomic) unsigned long long alignType;
@property (nonatomic) long long scaleType;
@property (copy, nonatomic) NSArray *outputs;

- (BOOL)isEqualToOther:(id)a0;
- (void)parseWith:(struct { struct { id x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; } x0; struct CGSize { double x0; double x1; } x1; })a0 metaInfo:(id)a1;
- (id)initWith:(struct { struct { id x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; } x0; struct CGSize { double x0; double x1; } x1; })a0 metaInfo:(id)a1;
- (void).cxx_destruct;

@end
