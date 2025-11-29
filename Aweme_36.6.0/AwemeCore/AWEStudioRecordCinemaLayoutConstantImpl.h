@class NSString;
@protocol IESServiceProvider;

@interface AWEStudioRecordCinemaLayoutConstantImpl : NSObject <AWEStudioRecordCinemaLayoutConstant>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, nonatomic) double toolBarStartY;
@property (readonly, nonatomic) double toolBarHeight;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } recordButtonFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } recordLeftButtonFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } recordRightButtonFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } recordLeftLabelFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } recordRightLabelFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } recordHandsFreeFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previewFrame_9_16;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previewFrame_3_4;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previewFrame_1_1;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewFrameWithRecordMode:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cinemaPreviewFrameWithRatioType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)p_init;

@end
