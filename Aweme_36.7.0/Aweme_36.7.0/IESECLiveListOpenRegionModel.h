@class NSString, IESECLiveDynamicRegionModel;

@interface IESECLiveListOpenRegionModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveDynamicRegionModel *listOpenCover;
@property (retain, nonatomic) IESECLiveDynamicRegionModel *listOpenTabContent;
@property (retain, nonatomic) IESECLiveDynamicRegionModel *listOpenTab;
@property (retain, nonatomic) IESECLiveDynamicRegionModel *listOpenTop;
@property (retain, nonatomic) IESECLiveDynamicRegionModel *listOpenFloatBottom;
@property (retain, nonatomic) IESECLiveDynamicRegionModel *listOpenSideBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
