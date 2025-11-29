@class UIImage, NSString, AWEAwemeModel;

@interface AWEFeedMediaPlayerCurrentFrameModel : NSObject <AWEFeedMediaPlayerCurrentFrameModelProtocol>

@property (retain, nonatomic) UIImage *currentFrameImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerViewRealFrameForWindow;
@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (nonatomic) long long mediaType;
@property (nonatomic) double currentPlayTimestamp;
@property (nonatomic) unsigned long long currentImageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
