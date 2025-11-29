@class NSString;

@interface WCMomentsTemplateInfo : NSObject <NSCoding, PBCoding, NSCopying>

@property (nonatomic) unsigned long long mjTemplateType;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *subtype;
@property (copy, nonatomic) NSString *templateID;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *AIModelType;
@property (copy, nonatomic) NSString *templateIndex;
@property (copy, nonatomic) NSString *iOSSDKVersionMin;
@property (copy, nonatomic) NSString *AndroidSDKVersionMin;
@property (nonatomic) unsigned long long minimumAssetCount;
@property (nonatomic) unsigned long long maximumAssetCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templateInfoWithOMJTemplateInfo:(id)a0 OMJMusicInfo:(id)a1 templateType:(unsigned long long)a2;
+ (id)templateInfoWithOMJTemplateInfo:(id)a0 musicID:(id)a1 templateType:(unsigned long long)a2;
+ (id)templateInfoWithMJVideoTemplate:(id)a0 musicID:(id)a1;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_templateID;
+ (void)PBArrayAdd_musicID;
+ (void)PBArrayAdd_iOSSDKVersionMin;
+ (void)PBArrayAdd_AndroidSDKVersionMin;
+ (void)PBArrayAdd_subtype;
+ (void)PBArrayAdd_AIModelType;
+ (void)PBArrayAdd_minimumAssetCount;
+ (void)PBArrayAdd_maximumAssetCount;
+ (void)initialize;

- (BOOL)isTemplateFromMiaoJian;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
