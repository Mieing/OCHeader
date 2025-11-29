@class NSString, NSMutableDictionary;

@interface IESLiveStreamPlayerSpecifyRatioPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerSpecifyRatioPluginProtocol>

@property (nonatomic) BOOL supportSpecifyRatio;
@property (nonatomic) struct CGSize { double width; double height; } specifyRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } specifyRatioFrame;
@property (retain, nonatomic) NSMutableDictionary *specifyRatioFrameForLayoutType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)storageUsedSpecifyRatioFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutType:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getUsedSpecifyRatioFrame;
- (void)pe_commonInit;
- (void)pe_prepareForReuse;
- (void).cxx_destruct;

@end
