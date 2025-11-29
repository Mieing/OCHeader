@class NSURL;

@interface QQApiWebImageObject : QQApiObject

@property (retain, nonatomic) NSURL *previewImageURL;

+ (id)objectWithPreviewImageURL:(id)a0 title:(id)a1 description:(id)a2;
+ (id)objectWithPreviewImageURL:(id)a0 title:(id)a1 description:(id)a2 tagName:(id)a3 messageExt:(id)a4;

- (id)initWithPreviewImageURL:(id)a0 title:(id)a1 description:(id)a2;
- (id)initWithPreviewImageURL:(id)a0 title:(id)a1 description:(id)a2 tagName:(id)a3 messageExt:(id)a4;
- (void).cxx_destruct;

@end
