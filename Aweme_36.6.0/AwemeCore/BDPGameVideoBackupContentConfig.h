@class NSString;

@interface BDPGameVideoBackupContentConfig : NSObject

@property (nonatomic) unsigned long long content_type;
@property (copy, nonatomic) NSString *content_url;
@property (nonatomic) long long video_preload_kb_size;

- (void).cxx_destruct;

@end
