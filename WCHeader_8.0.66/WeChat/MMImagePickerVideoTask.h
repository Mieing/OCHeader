@class MMAsset, AVAsset, NSURL;

@interface MMImagePickerVideoTask : NSObject

@property (retain, nonatomic) MMAsset *mmAsset;
@property (retain, nonatomic) AVAsset *videoAsset;
@property (retain, nonatomic) NSURL *videoUrl;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ completeCallback;

- (void).cxx_destruct;

@end
