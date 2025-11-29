@class NSString;

@interface LSIMNoticeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *updaterPigeonID;
@property (copy, nonatomic) NSString *updaterName;
@property (copy, nonatomic) NSString *updaterImage;
@property (nonatomic) double updateTime;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)noticeModelWithJSONString:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
