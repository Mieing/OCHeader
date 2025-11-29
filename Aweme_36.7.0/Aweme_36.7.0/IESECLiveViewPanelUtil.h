@class NSString, IESECLiveRoomContext;

@interface IESECLiveViewPanelUtil : NSObject <IESECLiveViewPanelDelegate>

@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isiPadAutoRotateMode;
- (void)panelShowView:(id)a0;
- (id)panelContainerView:(id)a0;
- (struct CGSize { double x0; double x1; })panelMaskSize:(id)a0;
- (struct CGSize { double x0; double x1; })panelSizeDefault:(id)a0;
- (struct CGSize { double x0; double x1; })panelSize:(id)a0;
- (id)panelSizeHeightPercent;
- (struct CGSize { double x0; double x1; })iPadPanelSize;
- (unsigned long long)corners:(id)a0;
- (struct CGSize { double x0; double x1; })panelContainerViewSize;
- (void).cxx_destruct;
- (id)initWithRoomContext:(id)a0;

@end
