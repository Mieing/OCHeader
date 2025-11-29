@class NSString, UIImage, AWEECOMIMVideoItemModel;

@interface AWEECOMIMMediaPreviewModel : NSObject <AWEECMediaPreviewProtocol>

@property (retain, nonatomic) AWEECOMIMVideoItemModel *videoItemModel;
@property (nonatomic) unsigned long long previewType;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *videoCoverURL;
@property (retain, nonatomic) UIImage *videoCoverImage;
@property (copy, nonatomic) NSString *videoLocalPath;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long videoWidth;
@property (nonatomic) unsigned long long videoHeight;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *apiStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
