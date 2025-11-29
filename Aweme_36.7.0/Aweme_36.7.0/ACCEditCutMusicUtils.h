@interface ACCEditCutMusicUtils : NSObject

+ (double)appropriateDurationOfMusicModel:(id)a0;
+ (double)videoMusicClipLengthWithPublishViewModel:(id)a0;
+ (id)clipRangeOfMusic:(id)a0 forPublishModel:(id)a1;
+ (BOOL)isLivePhotoMode:(id)a0;
+ (double)defaultMusicClipLength:(id)a0;
+ (struct _HTSAudioRange { double x0; double x1; })defaultRangeOfMusic:(id)a0 forPublishModel:(id)a1;
+ (long long)repeatCountOfMusic:(id)a0 forPublishModel:(id)a1;
+ (double)shootDurationOfMusic:(id)a0;
+ (id)initMusicClipRangeEnteringEditPageWithPublishViewModel:(id)a0 editService:(id)a1;
+ (id)clipRangeOfMusic:(id)a0 forPublishModel:(id)a1 audioRangeEnabled:(BOOL)a2;

@end
