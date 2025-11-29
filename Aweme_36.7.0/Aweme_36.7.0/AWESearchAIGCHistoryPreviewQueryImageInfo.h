@class NSString, NSArray, UIImage;

@interface AWESearchAIGCHistoryPreviewQueryImageInfo : AWEBaseApiModel <AWESearchAIGCImageCoverProvider>

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSArray *imageURLList;
@property (nonatomic) long long imageHeight;
@property (nonatomic) long long imageWidth;
@property (retain, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
