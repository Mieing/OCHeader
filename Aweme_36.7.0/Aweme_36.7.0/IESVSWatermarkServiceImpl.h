@class NSString;

@interface IESVSWatermarkServiceImpl : NSObject <IESVSWatermarkService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)createWatermarkWithData:(id)a0 containerView:(id)a1 markScene:(unsigned long long)a2;
- (id)vsCreateWatermarkWithData:(id)a0 containerView:(id)a1 edgeInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 markScene:(unsigned long long)a3;
- (void)saveWatermarkInfo:(id)a0 seasonID:(id)a1;
- (id)watermarkForLocalSave:(id)a0;
- (void)deleteLocalWatermarkInfo:(id)a0;
- (id)p_getIconWithWatermark:(id)a0 Scene:(unsigned long long)a1;
- (BOOL)isShowScene:(unsigned long long)a0;
- (BOOL)isVerticalStreamScene:(unsigned long long)a0;
- (BOOL)isLandScapeStreamScene:(unsigned long long)a0;
- (BOOL)isPreViewScene:(unsigned long long)a0;

@end
