@class NSString;

@interface AWEVSPersonalModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *notice;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long showCount;
@property (nonatomic) long long liveType;
@property (nonatomic) unsigned long long accountType;
@property (copy, nonatomic) NSString *bannerSchema;
@property (copy, nonatomic) NSString *showInfoSchema;
@property (copy, nonatomic) NSString *deepBackgroundColour;
@property (nonatomic) BOOL showOriginalSoundTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
