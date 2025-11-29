@class NSMutableDictionary;

@interface AWEPlayInteractionCommonTrackAreaInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *areaInfoDic;

+ (BOOL)enableTrackAreaInfoWithReferString:(id)a0;
+ (id)enableTrackAreaInfoArr;
+ (BOOL)enableTrackAreaInfo;

- (void)setAreaInfoForComponentIdentification:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isViewValid:(id)a0;
- (BOOL)isFrameValid:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAreaInfoForComponentIdentification:(id)a0 position:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)getInteractionAreaDic;
- (void)resetInteractionAreaDic;
- (void).cxx_destruct;

@end
