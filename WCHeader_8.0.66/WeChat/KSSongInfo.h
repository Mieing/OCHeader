@class NSString;

@interface KSSongInfo : NSObject

@property (nonatomic) unsigned int databytesPerSecond;
@property (nonatomic) double durion;
@property (nonatomic) long long fileSize;
@property (retain, nonatomic) NSString *artist;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *songURL;
@property (retain, nonatomic) NSString *songName;
@property (nonatomic) BOOL localFile;
@property (retain, nonatomic) NSString *fileVid;
@property (retain, nonatomic) NSString *fileExtension;

- (id)description;
- (void).cxx_destruct;

@end
