@class NSURL;

@interface QQApiVideoObject : QQApiURLObject

@property (retain, nonatomic) NSURL *flashURL;

+ (id)objectWithURL:(id)a0 title:(id)a1 description:(id)a2 previewImageData:(id)a3;
+ (id)objectWithURL:(id)a0 title:(id)a1 description:(id)a2 previewImageData:(id)a3 tagName:(id)a4 messageExt:(id)a5;
+ (id)objectWithURL:(id)a0 title:(id)a1 description:(id)a2 previewImageURL:(id)a3;
+ (id)objectWithURL:(id)a0 title:(id)a1 description:(id)a2 previewImageURL:(id)a3 tagName:(id)a4 messageExt:(id)a5;

- (void).cxx_destruct;

@end
