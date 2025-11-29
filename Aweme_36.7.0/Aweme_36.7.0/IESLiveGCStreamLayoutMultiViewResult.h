@class NSString;

@interface IESLiveGCStreamLayoutMultiViewResult : NSObject <IESLiveGameContentStreamLayoutMultiViewResult>

@property (nonatomic) BOOL isMain;
@property (copy, nonatomic) NSString *outputID;
@property (nonatomic) unsigned long long outputLevel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWith:(BOOL)a0 outputID:(id)a1 outputLevel:(unsigned long long)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 layoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void).cxx_destruct;

@end
