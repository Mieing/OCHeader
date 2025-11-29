@class NSString;

@interface AWEVideoMergeTransParam : NSObject

@property (copy, nonatomic) NSString *identifier;

+ (id)p_customVideoBitrate:(id)a0;
+ (id)merge;
+ (id)watermark;

- (id)logTag;
- (void)p_configTransParam:(id)a0;
- (void)configTransParam:(id)a0 withPublishViewModel:(id)a1 preview:(id)a2 videoData:(id)a3 transConfig:(id)a4 videoProcess:(id)a5 speedModel:(id)a6 completion:(id /* block */)a7;
- (void)p_logVideoOutputSettings:(id)a0 withPublishModel:(id)a1;
- (void).cxx_destruct;

@end
