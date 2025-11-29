@class NSString, AWEIMImageResourceURLInfo, AWEIMMixAILoraUserInfo, AWEURLModel;

@interface AWEIMMixedImageUserInfo : MTLModel <MTLJSONSerializing, AWEIMEncryptedImageProtocol>

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long briefTimestamp;
@property (retain, nonatomic) AWEIMImageResourceURLInfo *resourceURL;
@property (retain, nonatomic) AWEIMMixAILoraUserInfo *loraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *resURL;
@property (copy, nonatomic) NSString *resObjectID;
@property (copy, nonatomic) NSString *resSecretKey;
@property (copy, nonatomic) NSString *resMD5;
@property (copy, nonatomic) NSString *originMD5;
@property (nonatomic) long long resFileSize;
@property (readonly, nonatomic) AWEURLModel *resourceURLModel;
@property (readonly, nonatomic) AWEURLModel *largeResourceURLModel;
@property (readonly, nonatomic) AWEURLModel *mediumResourceURLModel;
@property (readonly, nonatomic) AWEURLModel *thumbResourceURLModel;
@property (nonatomic) struct CGSize { double width; double height; } coverSize;

+ (id)resourceURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
