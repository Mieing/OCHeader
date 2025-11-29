@class NSString, IESECURLModel, NSArray, IESECLiveCardSizeComponentLayoutModel;

@interface IESECLiveCardSizeComponentModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *imageURLStr;
@property (retain, nonatomic) IESECURLModel *titleImageInfo;
@property (retain, nonatomic) NSArray *detailInfo;
@property (retain, nonatomic) IESECLiveCardSizeComponentLayoutModel *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
