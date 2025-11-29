@class NSString;

@interface AWEWhoCanMessageMeModel : AWEBaseApiModel <IESIMWhoCanMessageMeModelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL friendSwitch;
@property (nonatomic) BOOL followSwitch;
@property (nonatomic) BOOL maybeKnowSwitch;
@property (nonatomic) BOOL strangerSwitch;
@property (nonatomic) BOOL mateSwitch;

+ (id)JSONKeyPathsByPropertyKey;

@end
