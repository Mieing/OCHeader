@class NSString, AWEPOIFeedUgcInfoTagContentModel;

@interface AWEPOIFeedUgcInfoTagModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (nonatomic) long long subType;
@property (nonatomic) double cellModeItemSpacing;
@property (nonatomic) double picModeItemSpacing;
@property (nonatomic) unsigned long long cellModeSplitType;
@property (nonatomic) unsigned long long picModeSplitType;
@property (retain, nonatomic) AWEPOIFeedUgcInfoTagContentModel *cellModeTag;
@property (retain, nonatomic) AWEPOIFeedUgcInfoTagContentModel *picModeTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
