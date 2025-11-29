@class NSDictionary, UIImage, AWEAwemeModel, AWEScreenShootEnhancedSearchEntranceView;

@interface AWEScreenShootSearchEntranceHelper : NSObject

@property (retain, nonatomic) AWEScreenShootEnhancedSearchEntranceView *enhancedEntranceView;
@property (nonatomic) unsigned long long playerStatus;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) UIImage *currentVideoFrameImage;
@property (retain, nonatomic) NSDictionary *trackParams;

+ (BOOL)enableWithAweme:(id)a0;
+ (id)sharedHelper;

- (id)getEntranceViewWithModel:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)fetchDataWithModel:(id)a0 withShotTime:(double)a1 playerStatus:(unsigned long long)a2;
- (id)getTagJson;
- (BOOL)shouldUseVideoFrame;
- (void)entranceClick;
- (void)reportEntranceShow;
- (id)fullTrackParams;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)shouldReport;

@end
