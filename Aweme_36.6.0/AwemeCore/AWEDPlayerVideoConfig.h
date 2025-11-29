@class NSString, UIImage, UIColor;

@interface AWEDPlayerVideoConfig : NSObject

@property (copy, nonatomic) NSString *outCoverUrl;
@property (retain, nonatomic) UIImage *outCoverImage;
@property (nonatomic) BOOL useLoadingView;
@property (nonatomic) BOOL hideLoadingViewAfterReadyForDisplay;
@property (copy, nonatomic) id /* block */ coverDecryptBlock;
@property (nonatomic) double defaultSeekToTime;
@property (nonatomic) long long customScaleMode;
@property (retain, nonatomic) UIColor *backUIColor;
@property (nonatomic) BOOL enableMetalRenderHDR;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *subTag;

- (void).cxx_destruct;
- (id)init;

@end
