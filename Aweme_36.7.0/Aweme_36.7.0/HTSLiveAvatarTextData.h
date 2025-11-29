@class NSData, HTSLivePackageMeta;

@interface HTSLiveAvatarTextData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLivePackageMeta *meta;
@property (nonatomic) BOOL hasMeta;
@property (copy, nonatomic) NSData *data_p;

+ (id)descriptor;

@end
