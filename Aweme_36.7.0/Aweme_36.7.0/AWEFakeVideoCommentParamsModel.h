@class NSString, NSArray, UIImage;

@interface AWEFakeVideoCommentParamsModel : NSObject

@property (copy, nonatomic) NSString *publishTitle;
@property (retain, nonatomic) NSArray *titleExtraInfo;
@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) BOOL isImage;

- (void).cxx_destruct;

@end
