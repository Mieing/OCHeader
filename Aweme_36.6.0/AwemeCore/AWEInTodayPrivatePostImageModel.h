@class NSString, NSArray, UIImage;

@interface AWEInTodayPrivatePostImageModel : NSObject

@property (copy, nonatomic) NSString *localIdentifier;
@property (copy, nonatomic) NSArray *imageUrlList;
@property (retain, nonatomic) UIImage *image;

+ (id)createModelsWithAwemeModel:(id)a0;
+ (id)createModelWithLocalIdentifier:(id)a0;

- (void)fetchCoverImage:(id /* block */)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })imageSize;

@end
