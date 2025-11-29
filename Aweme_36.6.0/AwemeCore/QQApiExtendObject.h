@class NSData, NSArray;

@interface QQApiExtendObject : QQApiObject

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSData *previewImageData;
@property (copy, nonatomic) NSArray *imageDataArray;

+ (id)objectWithData:(id)a0 previewImageData:(id)a1 title:(id)a2 description:(id)a3 imageDataArray:(id)a4;
+ (id)objectWithData:(id)a0 previewImageData:(id)a1 title:(id)a2 description:(id)a3 imageDataArray:(id)a4 tagName:(id)a5 messageExt:(id)a6;
+ (id)objectWithData:(id)a0 previewImageData:(id)a1 title:(id)a2 description:(id)a3 tagName:(id)a4 messageExt:(id)a5;
+ (id)objectWithData:(id)a0 previewImageData:(id)a1 title:(id)a2 description:(id)a3;

- (id)initWithData:(id)a0 previewImageData:(id)a1 title:(id)a2 description:(id)a3 imageDataArray:(id)a4;
- (id)initWithData:(id)a0 previewImageData:(id)a1 title:(id)a2 description:(id)a3 imageDataArray:(id)a4 tagName:(id)a5 messageExt:(id)a6;
- (id)initWithData:(id)a0 previewImageData:(id)a1 title:(id)a2 description:(id)a3;
- (id)initWithData:(id)a0 previewImageData:(id)a1 title:(id)a2 description:(id)a3 tagName:(id)a4 messageExt:(id)a5;
- (void).cxx_destruct;

@end
