@class NSString, IESLiveLinkmicGridLayoutManager;

@interface IESLiveLinkmicCanvasLayoutGrid : NSObject <IESLiveLinkmicCanvasLayoutProvider>

@property (retain, nonatomic) IESLiveLinkmicGridLayoutManager *manager;
@property (nonatomic) double topRatio;
@property (nonatomic) long long horizontalInset;
@property (nonatomic) long long verticalInset;
@property (nonatomic) long long separatorWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerRect;
@property (nonatomic, getter=isMainSlotEnable) BOOL mainSlotEnable;
@property (nonatomic) struct CGPoint { double x; double y; } mainOrigin;
@property (nonatomic) struct CGPoint { double x; double y; } slotOrigin;
@property (nonatomic) struct CGSize { double width; double height; } mainSlotRelativeSize;
@property (nonatomic) struct CGSize { double width; double height; } slotRelativeSize;
@property (nonatomic) long long maxRowCount;
@property (nonatomic) long long maxColumnCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)buildLayout;
- (id)separatorLayoutFrames;
- (id)sessionLayoutFrames;
- (id)sessionLayoutInset;
- (BOOL)isMainSlotWithIndex:(long long)a0;
- (id)streamLayoutProvider;
- (void).cxx_destruct;

@end
