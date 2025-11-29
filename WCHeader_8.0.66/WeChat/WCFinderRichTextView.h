@class UIColor, NSMutableDictionary, NSString;

@interface WCFinderRichTextView : RichTextView <ImageStyleDelegate>

@property (retain, nonatomic) NSMutableDictionary *respCache;
@property (retain, nonatomic) UIColor *dynamicIconDefaultColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultSVGMap;

- (BOOL)provideImageForStyle:(id)a0 handler:(id /* block */)a1;
- (BOOL)handleDynamicIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2 handler:(id /* block */)a3;
- (BOOL)handleDynamicIconId:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2 handler:(id /* block */)a3;
- (BOOL)handleCommentIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1 handler:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getFrameOfImageStyleMatches:(id /* block */)a0;
- (id)getParserByPaserType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
