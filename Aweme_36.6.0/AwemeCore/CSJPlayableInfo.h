@class NSString, CSJVideoInfo;

@interface CSJPlayableInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *playable_url;
@property (copy, nonatomic) NSString *playableZipUrl;
@property (nonatomic) unsigned long long playableOrientation;
@property (nonatomic) long long playable_auto_convert;
@property (nonatomic) long long playable_backup_enable;
@property (nonatomic) long long playable_webview_timeout;
@property (nonatomic) long long playable_js_timeout;
@property (copy, nonatomic) NSString *originalPlayableUrl;
@property (nonatomic) BOOL allowOpenPlayableLandingPage;
@property (nonatomic) long long isPlayWithDownload;
@property (nonatomic) BOOL enablePreRender;
@property (nonatomic) BOOL is_play_with_watching;
@property (retain, nonatomic) CSJVideoInfo *videoInfo;

- (void)setupDataWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
