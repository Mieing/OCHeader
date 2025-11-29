@class NSArray, ACCTemplateDetailModel, NSString, ACCMusicEditInfo;

@interface ACCRecommendTemplateInfo : MTLModel <MTLJSONSerializing, NSCopying>

@property (retain, nonatomic) ACCTemplateDetailModel *templateBaseInfo;
@property (retain, nonatomic) ACCMusicEditInfo *musicEditInfo;
@property (retain, nonatomic) NSArray *segmentInfos;
@property (copy, nonatomic) NSString *meta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)segmentInfosJSONTransformer;
+ (id)musicEditInfoJSONTransformer;
+ (id)templateBaseInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
