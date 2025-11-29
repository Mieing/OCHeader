@class NSString, HTSLiveCommon;

@interface HTSLiveBackupSEIMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *seiData;
@property (copy, nonatomic) NSString *streamId;

+ (id)descriptor;

@end
