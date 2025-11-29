@interface IESLiveInteractLyricRecognitionUtil : NSObject

+ (id)createLyricViewWithConfig:(id)a0;
+ (id)getIndexElementPreview:(id)a0 index:(unsigned long long)a1;
+ (id)createEnlargeAIStageContentViewWithStageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 parentView:(id)a1 lyricLayoutConfig:(id)a2;
+ (id)createDoubleCAIStageContentViewWithFirstSeat:(id)a0 secondSeat:(id)a1 parentView:(id)a2 lyricLayoutConfig:(id)a3;
+ (id)create1V8AIStageContentView:(id)a0 parentView:(id)a1 lyricLayoutConfig:(id)a2;
+ (id)createAIStageLyricViewWithFont:(id)a0 fontSize:(double)a1 lyricComponentWidth:(double)a2 lyricAlignment:(long long)a3 numberOfLines:(unsigned long long)a4;
+ (id)getIndexElement:(id)a0 index:(unsigned long long)a1;
+ (id)getIndexElementLayout:(id)a0 index:(unsigned long long)a1;
+ (id)createAIStageContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lyricLayoutConfig:(id)a1 parentView:(id)a2;

@end
