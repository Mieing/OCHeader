@class NSString;

@interface IESIMMessageSizeService : NSObject <IESIMMessageSizeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (struct CGSize { double x0; double x1; })updateSizeInProportion:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })getOptDisplayCoverSize:(struct CGSize { double x0; double x1; })a0;
- (double)getMediaCoverSizeOptMaxWidth;
- (double)getMediaCoverSizeOptSizeRedundancy;
- (id)getMediaCoverSizeOptConfigList;
- (BOOL)enableMediaEfficiency;
- (struct CGSize { double x0; double x1; })getEfficientMediaSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })optv2_updateSizeInProportion:(struct CGSize { double x0; double x1; })a0;
- (id)getMediaCoverOptSettingsDic;
- (void)p_rescaleWithLonger:(double *)a0 shorter:(double *)a1 max:(double)a2 min:(double)a3;

@end
