@class NSString;

@interface AWEDTODraftModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *draftId;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) double saveTime;
@property (nonatomic) long long editFrequency;
@property (nonatomic) long long savePolicy;
@property (nonatomic) long long draftIdForReport;
@property (copy, nonatomic) NSString *videoPath;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) BOOL isUserAction;
@property (copy, nonatomic) NSString *firstSavedAppVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
