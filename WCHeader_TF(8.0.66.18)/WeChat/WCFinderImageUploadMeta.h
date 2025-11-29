@class NSString, WCFinderUploadMediaTask;

@interface WCFinderImageUploadMeta : NSObject

@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) WCFinderUploadMediaTask *mediaTask;
@property (nonatomic) unsigned long long cdnHeaderType;

- (void).cxx_destruct;

@end
