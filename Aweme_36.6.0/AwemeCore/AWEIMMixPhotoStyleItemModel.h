@class NSString, NSNumber, NSArray;

@interface AWEIMMixPhotoStyleItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSNumber *memberCount;
@property (copy, nonatomic) NSString *backgroundUrl;
@property (copy, nonatomic) NSString *styleId;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *showTag;
@property (copy, nonatomic) NSString *loraStyleId;
@property (copy, nonatomic) NSArray *configs;
@property (copy, nonatomic) NSString *effectId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (id)jumpConfigList;
- (void).cxx_destruct;

@end
