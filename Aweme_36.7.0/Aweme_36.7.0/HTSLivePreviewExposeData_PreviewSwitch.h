@interface HTSLivePreviewExposeData_PreviewSwitch : IESLivePBBaseMessage

@property (nonatomic) int title;
@property (nonatomic) int previewGuide;
@property (nonatomic) int dynamicLabel;
@property (nonatomic) int assistLabel;
@property (nonatomic) int extendArea;

+ (id)descriptor;

- (int)extendArea;
- (int)assistLabel;
- (int)dynamicLabel;
- (int)previewGuide;
- (int)title;
- (void)setExtendArea:(int)a0;
- (void)setPreviewGuide:(int)a0;
- (void)setAssistLabel:(int)a0;
- (void)setTitle:(int)a0;
- (void)setDynamicLabel:(int)a0;

@end
