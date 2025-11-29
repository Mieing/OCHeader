@class NSString, AWEIronManLandingPageDataController, NSDictionary;

@interface AWEIronManLandingPageSearchInfoViewModel : MTLModel <MTLJSONSerializing, AWEIronManLandingPageViewModelProtocol, AWEIronManLandingPageTrackerViewModelProtocol>

@property (retain, nonatomic) AWEIronManLandingPageDataController *dataVc;
@property (copy, nonatomic) NSString *hint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long uiVersion;
@property (nonatomic) unsigned long long enterFrom;
@property (copy, nonatomic) NSDictionary *bdpExtra;
@property (copy, nonatomic) NSDictionary *commonRequestParamDict;
@property (nonatomic) unsigned long long section;
@property (copy, nonatomic) NSDictionary *commonTrackDict;

+ (id)JSONKeyPathsByPropertyKey;

@end
