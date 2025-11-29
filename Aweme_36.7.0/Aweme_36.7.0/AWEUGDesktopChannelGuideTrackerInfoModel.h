@class NSString;

@interface AWEUGDesktopChannelGuideTrackerInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *showFrom;
@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSString *extraString;
@property (copy, nonatomic) NSString *guideStyleType;
@property (copy, nonatomic) NSString *guideMidType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
