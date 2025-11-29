@class NSString, FinderHalfRect;

@interface WCFinderFullScreenEditRectModel : NSObject <PBCoding>

@property (nonatomic) double leftPrecent;
@property (nonatomic) double topPrecent;
@property (nonatomic) double widthPrecent;
@property (nonatomic) double heightPrecent;
@property (retain, nonatomic) FinderHalfRect *halfRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_leftPrecent;
+ (void)PBArrayAdd_topPrecent;
+ (void)PBArrayAdd_widthPrecent;
+ (void)PBArrayAdd_heightPrecent;
+ (void)PBArrayAdd_halfRect;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithHalfRect:(id)a0 feedSize:(struct CGSize { double x0; double x1; })a1;
- (id)genHalfRectWithFeedSize:(struct CGSize { double x0; double x1; })a0;
- (id)covertRectModelFromOldFeedSize:(struct CGSize { double x0; double x1; })a0 toNewFeedSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)isLegalEditRectModel;
- (void)correctParamsToLegal;
- (void).cxx_destruct;

@end
