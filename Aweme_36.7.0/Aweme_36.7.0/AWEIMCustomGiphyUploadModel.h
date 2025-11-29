@class NSData, NSString;

@interface AWEIMCustomGiphyUploadModel : NSObject

@property (retain, nonatomic) NSData *uploadData;
@property (nonatomic) struct CGSize { double width; double height; } uploadSize;
@property (nonatomic) BOOL isGif;
@property (copy, nonatomic) NSString *md5Str;
@property (copy, nonatomic) NSString *imageType;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *staticType;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
