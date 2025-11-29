@class NSString;

@interface AWEDTOAIGCStickerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) long long taskStatus;
@property (copy, nonatomic) NSString *draftId;
@property (copy, nonatomic) NSString *srcPath;
@property (copy, nonatomic) NSString *coverPath;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *propSelectedFrom;
@property (nonatomic) long long createdTime;
@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *finalGenerator;
@property (copy, nonatomic) NSString *effectName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
