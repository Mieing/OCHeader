@class NSString;

@interface APCDTOStoryContentModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long contentType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *sourceFrom;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) BOOL isTextMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
