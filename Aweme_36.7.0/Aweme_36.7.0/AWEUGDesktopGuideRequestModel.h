@class NSString, NSDictionary;

@interface AWEUGDesktopGuideRequestModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *passControlLevel;
@property (copy, nonatomic) NSString *guideStyleType;
@property (nonatomic) BOOL needLoading;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)sceneUniqueKey;
- (void).cxx_destruct;

@end
