@class NSString, VideoCompositionAttr, MMAsset;

@interface EmoticonCustomCreatePreProcessTask : EmoticonCustomCreateInternalTask

@property (retain, nonatomic) NSString *localVideoPath;
@property (retain, nonatomic) VideoCompositionAttr *compositionAttr;
@property (retain, nonatomic) MMAsset *mmAsset;
@property (copy, nonatomic) id /* block */ cropStartBlock;
@property (copy, nonatomic) id /* block */ cropSucBlock;
@property (copy, nonatomic) id /* block */ cropFailBlock;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropFrame;
@property (nonatomic) unsigned long long autoSizeCrop;

- (id)initWithLocalVideoPath:(id)a0;
- (void)startPreprocess;
- (BOOL)isValid;
- (void)prepareForComposition:(id /* block */)a0;
- (void)startComposing;
- (struct CGSize { double x0; double x1; })getMediaSize:(id)a0;
- (BOOL)isCropRectSafe:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isCropLengthSafe:(double)a0;
- (void).cxx_destruct;

@end
