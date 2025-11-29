@class NSString, NSData;

@interface TencentAudioMessageObjV1 : TencentBaseMessageObj

@property (copy, nonatomic) NSString *sUrl;
@property (copy, nonatomic) NSData *dataImagePreview;
@property (copy, nonatomic) NSString *sImagePreviewUrl;
@property (copy, nonatomic) NSString *sDescription;

- (BOOL)isVaild;
- (id)initWithAudioUrl:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
