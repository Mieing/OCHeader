@class NSString, NSDictionary, IESECListKitItemExposureDataModel;

@interface IESECListKitDemoLiveHeaderData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *liveDescription;
@property (copy, nonatomic) NSString *liveIcon;
@property (copy, nonatomic) NSString *enterLiveIcon;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *btmCD;
@property (copy, nonatomic) NSDictionary *bcmData;
@property (retain, nonatomic) IESECListKitItemExposureDataModel *showTrackEvent;
@property (retain, nonatomic) IESECListKitItemExposureDataModel *clickTrackEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
