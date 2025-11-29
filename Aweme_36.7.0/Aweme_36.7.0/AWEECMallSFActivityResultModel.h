@class NSString, IESECURLModel;

@interface AWEECMallSFActivityResultModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *bgURL;
@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
