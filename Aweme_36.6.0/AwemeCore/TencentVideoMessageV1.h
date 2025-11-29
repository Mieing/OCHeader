@class NSString, NSData;

@interface TencentVideoMessageV1 : TencentBaseMessageObj

@property (copy, nonatomic) NSString *sUrl;
@property (readonly, nonatomic) long long nType;
@property (copy, nonatomic) NSData *dataImagePreview;
@property (copy, nonatomic) NSString *sImagePreviewUrl;
@property (copy, nonatomic) NSString *sDescription;

- (BOOL)isVaild;
- (id)initWithVideoUrl:(id)a0 type:(int)a1;
- (void).cxx_destruct;
- (id)initWithType:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
