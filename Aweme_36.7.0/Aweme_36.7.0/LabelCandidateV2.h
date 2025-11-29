@class NSString, DynamicLabelsInfoV2, StaticLabelInfoV2;

@interface LabelCandidateV2 : GPBMessage

@property (copy, nonatomic) NSString *businessId;
@property (nonatomic) BOOL hasBusinessId;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) StaticLabelInfoV2 *staticLabel;
@property (nonatomic) BOOL hasStaticLabel;
@property (retain, nonatomic) DynamicLabelsInfoV2 *dynamicLabels;
@property (nonatomic) BOOL hasDynamicLabels;
@property (copy, nonatomic) NSString *labelGroup;
@property (nonatomic) BOOL hasLabelGroup;
@property (copy, nonatomic) NSString *labelType;
@property (nonatomic) BOOL hasLabelType;
@property (nonatomic) long long templateType;
@property (nonatomic) BOOL hasTemplateType;

+ (id)descriptor;

@end
