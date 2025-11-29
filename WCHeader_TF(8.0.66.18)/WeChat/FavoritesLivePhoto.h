@class NSString;

@interface FavoritesLivePhoto : NSObject

@property (nonatomic) int fileType;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int stilltime;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *fileid;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *sourcePath;

- (void).cxx_destruct;

@end
