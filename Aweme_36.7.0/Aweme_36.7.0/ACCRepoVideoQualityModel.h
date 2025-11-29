@class ACCVideoQualityBaseSource, NSString, NSURL, ACCVideoQualityExecContext;

@interface ACCRepoVideoQualityModel : NSObject <NSCopying>

@property (retain, nonatomic) ACCVideoQualityExecContext *execContxt;
@property (retain, nonatomic) ACCVideoQualityBaseSource *source;
@property (retain, nonatomic) NSURL *mergeURL;
@property (retain, nonatomic) NSURL *watermarkURL;
@property (copy, nonatomic) NSString *vid;
@property (nonatomic) BOOL enable2k4k;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
