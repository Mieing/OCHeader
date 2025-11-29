@class MMUIImageView, NSString, MMUIButton, UITapGestureRecognizer;
@protocol MMFinderLivePreviewExitButtonDelegate;

@interface MMFinderLivePreviewExitButton : MMUIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) MMUIImageView *imageView;
@property (retain, nonatomic) MMUIButton *backgroundButton;
@property (retain, nonatomic) UITapGestureRecognizer *gesture;
@property (weak, nonatomic) id<MMFinderLivePreviewExitButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
