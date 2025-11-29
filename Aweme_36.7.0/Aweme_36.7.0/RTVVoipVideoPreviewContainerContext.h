@class RTVVoipVideoPreviewView;

@interface RTVVoipVideoPreviewContainerContext : NSObject

@property (retain, nonatomic) RTVVoipVideoPreviewView *previewView;
@property (nonatomic) BOOL shouldShowAvatarWhenApparentAndDisplayVideo;
@property (copy, nonatomic) id /* block */ nickNameShouldShow;

- (void).cxx_destruct;

@end
