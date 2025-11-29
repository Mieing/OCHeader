@class NSString;

@interface IESLiveStreamXPresetParamInitResource : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *downloadURL;
@property (nonatomic) BOOL isDecompress;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *resourceType;
@property (copy, nonatomic) NSString *type;

+ (id)descriptor;

@end
