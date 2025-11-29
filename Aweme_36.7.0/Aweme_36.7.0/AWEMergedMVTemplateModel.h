@class NSArray, NSString, AWEClassicMVModel, AWEAweMVTemplateModel;

@interface AWEMergedMVTemplateModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long templateID;
@property (nonatomic) long long templateType;
@property (retain, nonatomic) AWEAweMVTemplateModel *cutSameMvModel;
@property (copy, nonatomic) NSArray *urlPrefix;
@property (retain, nonatomic) AWEClassicMVModel *classicMvModel;
@property (nonatomic) unsigned long long templateSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cutSameMvModelJSONTransformer;
+ (id)classicMvModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
