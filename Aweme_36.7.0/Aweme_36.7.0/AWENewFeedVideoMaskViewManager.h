@class NSString;

@interface AWENewFeedVideoMaskViewManager : NSObject <AWENewFeedVideoMaskViewManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldUseNewFeedBottomMaskImageWithModel:(id)a0 referString:(id)a1;
+ (unsigned long long)getBottomMaskImageTypeWithModel:(id)a0 referString:(id)a1;
+ (id)getBottomGradientViewWithType:(unsigned long long)a0;
+ (BOOL)shouldGetNewMaskForVideo;
+ (BOOL)shouldGetNewMaskForOwnerVideo;
+ (BOOL)shouldGetNewMaskForVideoWithCaption;
+ (BOOL)shouldGetNewMaskForNOCaptionVideo;
+ (BOOL)shouldUseNewIcon;
+ (id)getABSettings;
+ (long long)getBottomGradientViewHeightWithModel:(id)a0 referString:(id)a1 originHeight:(double)a2;
+ (BOOL)shouldUseNewFeedBottomMaskIcon:(id)a0 referString:(id)a1;


@end
