@class NSString;
@protocol ACCEditServiceProtocol, IESServiceProvider;

@interface AWECoverEditorNLEEditorInputData : ACCEditViewControllerInputData

@property (retain, nonatomic) id<ACCEditServiceProtocol> sourceEditService;
@property (retain, nonatomic) id<IESServiceProvider> sourceServiceProvider;
@property (copy, nonatomic) NSString *currentProjectUUID;
@property (copy, nonatomic) id /* block */ saveBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL activeNLE;
@property (nonatomic) BOOL isVideoCover;
@property (nonatomic) BOOL cutRatioVertical;
@property (copy, nonatomic) id /* block */ changeBlock;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cutRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originBounds;
@property (copy, nonatomic) id /* block */ willChoosePageShowBlock;
@property (copy, nonatomic) id /* block */ stashChangesBlock;
@property (nonatomic) BOOL shouldShowEditVCDirectly;
@property (copy, nonatomic) id /* block */ updateCoverWithExportData;
@property (copy, nonatomic) id /* block */ updateCoverWithImage;
@property (copy, nonatomic) id /* block */ triggerEditorRequestRecommendText;
@property (copy, nonatomic) id /* block */ editHasEelements;

- (void).cxx_destruct;

@end
