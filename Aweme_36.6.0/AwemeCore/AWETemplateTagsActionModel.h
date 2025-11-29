@class NSString, AWETemplateTagsLabelDetailData;

@interface AWETemplateTagsActionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *eventID;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *dataRef;
@property (retain, nonatomic) AWETemplateTagsLabelDetailData *detailData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
