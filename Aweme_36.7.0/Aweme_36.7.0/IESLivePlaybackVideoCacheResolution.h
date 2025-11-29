@class NSString;

@interface IESLivePlaybackVideoCacheResolution : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) unsigned long long resolutionType;
@property (readonly, copy, nonatomic) NSString *title;

- (unsigned long long)resolutionTypeWithKey:(id)a0;
- (id)initWithDownloadSize:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
