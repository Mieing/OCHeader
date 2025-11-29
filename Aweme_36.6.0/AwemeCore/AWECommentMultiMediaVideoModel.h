@class NSString, NSNumber;

@interface AWECommentMultiMediaVideoModel : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *mainVideoPlayURL;
@property (copy, nonatomic) NSString *backupVideoPlayURL;
@property (retain, nonatomic) NSNumber *videoWidth;
@property (retain, nonatomic) NSNumber *videoHeight;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *coverImageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
