@class DVEVideoThumbnailView;
@protocol DVEVideoThumbnailLayoutDelegate;

@interface DVEVideoThumbnailLayout : NSObject

@property (weak, nonatomic) DVEVideoThumbnailView *videoThumbnailView;
@property (weak, nonatomic) id<DVEVideoThumbnailLayoutDelegate> delegate;

- (void).cxx_destruct;

@end
