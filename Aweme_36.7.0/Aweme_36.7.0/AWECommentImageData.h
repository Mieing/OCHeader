@class AWECommentModel, NSArray, UIImage, AWECommentImageModel;

@interface AWECommentImageData : NSObject

@property (retain, nonatomic) UIImage *placeHolderImage;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (retain, nonatomic) AWECommentImageModel *imageModel;
@property (retain, nonatomic) NSArray *commentModelsList;
@property (retain, nonatomic) NSArray *imageModelsList;

- (void).cxx_destruct;

@end
