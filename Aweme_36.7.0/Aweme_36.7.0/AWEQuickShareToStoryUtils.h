@interface AWEQuickShareToStoryUtils : NSObject

+ (id)shareCommentImageToStoryModelWithAwemeModel:(id)a0;
+ (void)getImageWithURLList:(id)a0 completion:(id /* block */)a1;
+ (id)textExtraFromAPCDTOTextExtra:(id)a0;
+ (void)composeBackgroundTopColor:(id)a0 bottomColor:(id)a1 withForegroundImage:(id)a2 storyModel:(id)a3 completion:(id /* block */)a4;
+ (void)getGradientColorWithImage:(id)a0 completion:(id /* block */)a1;
+ (void)composeBackgroundImage:(id)a0 withForegroundImage:(id)a1 completion:(id /* block */)a2;
+ (id)getStaticAvatarImageFromUser:(id)a0;
+ (id)shareImageToStoryModelWithAwemeModel:(id)a0;
+ (id)shareSlidesVideoToStoryModelWithAwemeModel:(id)a0 videoModel:(id)a1;
+ (id)shareVideoToStoryModelWithAwemeModel:(id)a0;
+ (void)getImageWithShareImageToStoryModel:(id)a0 completion:(id /* block */)a1;
+ (void)getImageWithShareVideoToStoryModel:(id)a0 completion:(id /* block */)a1;
+ (id)composeBackgroundTopColor:(id)a0 bottomColor:(id)a1 withForegroundImage:(id)a2;

@end
