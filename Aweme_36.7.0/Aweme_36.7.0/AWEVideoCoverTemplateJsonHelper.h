@interface AWEVideoCoverTemplateJsonHelper : NSObject

+ (id)p_jsonStringEncoded:(id)a0;
+ (id)templateJson:(id)a0 originBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cutRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)emptyTemplateJsonFor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cutRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct AWEVideoCoverEditCutConfig { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; })videoCoverEditCutConfigForTemplateJson:(id)a0;
+ (id)pathForEmptyTemplateJsonIsLandscape:(BOOL)a0;
+ (id)templateJsonDictionary:(id)a0 originBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cutRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)p_jsonDictionaryWithString:(id)a0;
+ (id)getMainLayerJsonAtTemplateJson:(id)a0;
+ (id)replaceMainLayerJsonAtTemplateJson:(id)a0 withMainLayerJson:(id)a1;
+ (id)emptyTemplateJsonNameIsLandscape:(BOOL)a0;
+ (struct AWEVideoCoverPresetAdjustConfig { struct CGPoint { double x0; double x1; } x0; double x1; })adjustConfigOriginBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cutRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
