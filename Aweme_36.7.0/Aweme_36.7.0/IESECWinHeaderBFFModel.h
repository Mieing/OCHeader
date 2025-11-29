@class NSArray, IESECWinHeaderOtherInfoModel, NSString, IESECListKitListModel;

@interface IESECWinHeaderBFFModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECWinHeaderOtherInfoModel *otherInfo;
@property (copy, nonatomic) NSArray *sections;
@property (retain, nonatomic) IESECListKitListModel *feed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
