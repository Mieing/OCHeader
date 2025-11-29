@class NSString, TingCdnImageUploadTask;

@interface TingCdnImageUploadMeta : NSObject

@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) id /* block */ complection;
@property (retain, nonatomic) TingCdnImageUploadTask *uploadTask;

- (void).cxx_destruct;

@end
