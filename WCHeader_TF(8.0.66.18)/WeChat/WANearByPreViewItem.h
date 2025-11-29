@class NSString;

@interface WANearByPreViewItem : MMObject

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *previewNickName;
@property (copy, nonatomic) NSString *headImageUrlString;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int debugMode;

- (void).cxx_destruct;

@end
