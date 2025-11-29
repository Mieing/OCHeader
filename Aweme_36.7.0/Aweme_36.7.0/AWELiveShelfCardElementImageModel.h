@class AWELiveShelfElementTextModel, NSString, NSNumber, AWELiveShelfElementMediaModel;

@interface AWELiveShelfCardElementImageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELiveShelfElementTextModel *indexText;
@property (retain, nonatomic) AWELiveShelfElementMediaModel *headImage;
@property (retain, nonatomic) AWELiveShelfElementMediaModel *tagImage;
@property (retain, nonatomic) AWELiveShelfElementMediaModel *borderImage;
@property (retain, nonatomic) AWELiveShelfElementTextModel *maskText;
@property (nonatomic) BOOL isGray;
@property (copy, nonatomic) NSNumber *headMargin;
@property (nonatomic) long long tagImageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
