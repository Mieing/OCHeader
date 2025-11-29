@class NSString;

@interface MJTemplateMediaResource : NSObject

@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *mediaUrl;
@property (copy, nonatomic) NSString *mediaId;
@property (copy, nonatomic) NSString *mediaFileMd5;

- (id)initWithResource:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
