@class NSString, NSArray;

@interface BDASplashImageInfoModel : NSObject

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSArray *urlList;
@property (copy, nonatomic) NSString *uriOriginal;
@property (copy, nonatomic) NSArray *urlListOriginal;

- (id)getImageFilePath;
- (id)getBDImage;
- (id)getImageData;
- (id)getRealUrlListWithList:(id)a0;
- (BOOL)isValidModel;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
