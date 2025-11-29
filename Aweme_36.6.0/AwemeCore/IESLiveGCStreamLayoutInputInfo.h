@class NSArray, NSDictionary, IESLiveGCStreamLayoutInputDisplayInfo, NSNumber;

@interface IESLiveGCStreamLayoutInputInfo : NSObject

@property (nonatomic) struct { struct { NSDictionary *metaInfo; unsigned long long displayType; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } content; struct UIEdgeInsets { double top; double left; double bottom; double right; } margin; } cropData; struct CGSize { double width; double height; } streamSize; } rawData;
@property (retain, nonatomic) NSNumber *ts;
@property (retain, nonatomic) IESLiveGCStreamLayoutInputDisplayInfo *appliedDisplayInfo;
@property (retain, nonatomic) IESLiveGCStreamLayoutInputDisplayInfo *lastAppliedDisplayInfo;
@property (copy, nonatomic) NSArray *displayInfos;
@property (copy, nonatomic) NSArray *inputs;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerContent;
@property (nonatomic) BOOL needBuildBottomMargin;

- (unsigned long long)getDisplayViewRepresentationType;
- (id)getInputDataWith:(id)a0;
- (BOOL)isEqualToOther:(id)a0;
- (unsigned long long)getDisplayContainerType;
- (unsigned long long)getBusinessScene;
- (BOOL)changeAppliedDisplayInfoWith:(unsigned long long)a0;
- (void)parseData:(struct { struct { id x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWith:(struct { struct { id x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
