@class NSURL, NSString;

@interface ACCModernAutoCaptionUploadInfo : ACCBaseApiModel <MTLJSONSerializing, NSCopying>

@property (retain, nonatomic) NSURL *mixAudioUrl;
@property (copy, nonatomic) NSString *tosKey;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) BOOL hasAudioChanged;
@property (nonatomic) BOOL reGenerate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
