@class NSURL, NSData;

@interface QQApiURLObject : QQApiObject

@property (nonatomic) unsigned long long targetContentType;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSData *previewImageData;
@property (retain, nonatomic) NSURL *previewImageURL;

+ (id)objectWithURL:(id)a0 title:(id)a1 description:(id)a2 previewImageData:(id)a3 targetContentType:(unsigned long long)a4;
+ (id)objectWithURL:(id)a0 title:(id)a1 description:(id)a2 previewImageData:(id)a3 tagName:(id)a4 messageExt:(id)a5 targetContentType:(unsigned long long)a6;
+ (id)objectWithURL:(id)a0 title:(id)a1 description:(id)a2 previewImageURL:(id)a3 targetContentType:(unsigned long long)a4;
+ (id)objectWithURL:(id)a0 title:(id)a1 description:(id)a2 previewImageURL:(id)a3 tagName:(id)a4 messageExt:(id)a5 targetContentType:(unsigned long long)a6;
+ (id)objectWithURL:(id)a0;

- (long long)checkParamValid;
- (id)initWithURL:(id)a0 title:(id)a1 description:(id)a2 previewImageData:(id)a3 targetContentType:(unsigned long long)a4;
- (id)initWithURL:(id)a0 title:(id)a1 description:(id)a2 previewImageData:(id)a3 tagName:(id)a4 messageExt:(id)a5 targetContentType:(unsigned long long)a6;
- (id)initWithURL:(id)a0 title:(id)a1 description:(id)a2 previewImageURL:(id)a3 targetContentType:(unsigned long long)a4;
- (id)initWithURL:(id)a0 title:(id)a1 description:(id)a2 previewImageURL:(id)a3 tagName:(id)a4 messageExt:(id)a5 targetContentType:(unsigned long long)a6;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end
