@class NSString, NSArray, UIImage, AWECommentImageSourceInfoModel;

@interface AWECommentPublishImageModel : NSObject <AWECommentPublishImageMediaModelProtocol>

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *imageFilePath;
@property (copy, nonatomic) NSArray *imageUrlList;
@property (retain, nonatomic) AWECommentImageSourceInfoModel *imageSourceInfo;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSString *imageSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)imageContent;

@end
