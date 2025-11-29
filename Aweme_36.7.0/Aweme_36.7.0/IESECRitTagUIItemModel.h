@class IESECURLModel, NSString, IESECRitTagTextConfigModel, IESECRitTagSplitorConfig;

@interface IESECRitTagUIItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) IESECURLModel *image;
@property (retain, nonatomic) IESECRitTagTextConfigModel *textConfig;
@property (retain, nonatomic) IESECRitTagSplitorConfig *splitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
