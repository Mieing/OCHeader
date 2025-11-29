@class UIImage, NSString;

@interface MMFinderLiveOcrIn : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) id userInfo;

+ (id)buildInputWithImage:(id)a0 path:(id)a1 userInfo:(id)a2;

- (void).cxx_destruct;

@end
