@class AWEScreenShootPanelViewModel, AWEScreenShootPanelAlert, AWEAwemeModel, AWEScreenShootPanelSheet, NSString, UIImage;

@interface AWEScreenShootPanelManager : NSObject <DUXSheetDelegate, AWEScreenShootPanelProtocol>

@property (retain, nonatomic) AWEScreenShootPanelAlert *dummyAlert;
@property (retain, nonatomic) AWEScreenShootPanelSheet *sheet;
@property (retain, nonatomic) AWEScreenShootPanelViewModel *screenShootVM;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) UIImage *screenShootImage;
@property (retain, nonatomic) UIImage *screenShootImageWithTailoring;
@property (nonatomic) double currentTime;
@property (nonatomic) BOOL canSheetAutoDismiss;
@property (nonatomic) BOOL isFromDetailView;
@property (nonatomic) BOOL isScreenShootPanelShow;
@property (nonatomic) BOOL disablePanel;
@property (nonatomic) unsigned long long playerStatus;
@property (retain, nonatomic) UIImage *currentVideoFrameImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)sheetDidDismiss:(id)a0;
- (void)shootScreenForComment;
- (id)screenShotImage;
- (BOOL)p_isSystemShareSwitchOn;
- (void)dismissWithSheetMeanwhile:(BOOL)a0 animation:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)canShowScreenShootPanel;
- (void)screenShootPopoverShow:(id)a0 WithAwemeModel:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withReferString:(id)a3 withCommentVCShow:(BOOL)a4 withShotTime:(double)a5;
- (BOOL)isFromDetailTableView;
- (id)screenShotImageImage:(id)a0 WithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)canModelShare:(id)a0;
- (BOOL)screenShootPanelShowSwitch;
- (void)screenShootPanelShowWithAwemeModel:(id)a0 withReferString:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withMask:(BOOL)a3;
- (id)screenShootImageGeneratedWith:(id)a0;
- (void)dismissWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
