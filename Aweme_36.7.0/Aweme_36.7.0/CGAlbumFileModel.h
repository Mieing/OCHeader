@class NSString;

@interface CGAlbumFileModel : NSObject

@property (copy, nonatomic) NSString *appPackageName;
@property (copy, nonatomic) NSString *savePath;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *downloadUrl;
@property (nonatomic) long long uploadState;
@property (nonatomic) long long uploadProgress;

- (void).cxx_destruct;

@end
