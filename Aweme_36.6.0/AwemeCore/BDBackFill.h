@class NSURL;

@interface BDBackFill : NSObject

@property (nonatomic) unsigned long long imageType;
@property (retain, nonatomic) NSURL *thumbImageURL;
@property (retain, nonatomic) NSURL *previewImageURL;
@property (retain, nonatomic) NSURL *originalImageURL;

- (void).cxx_destruct;

@end
