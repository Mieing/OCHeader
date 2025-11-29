@class NSNumber, NSString, AWELiveAdaptionInfo;

@interface AWELiveStreamExtraInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) AWELiveAdaptionInfo *adaptionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)liveStreamExtra;
- (void).cxx_destruct;

@end
