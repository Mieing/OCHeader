@class NSString;
@protocol ACCAwemeModelProtocol;

@interface AWEDTODuetModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) id<ACCAwemeModelProtocol> sourceAweme;
@property (copy, nonatomic) NSString *duetItemId;
@property (copy, nonatomic) NSString *duetOrigin;
@property (copy, nonatomic) NSString *duetLayout;
@property (copy, nonatomic) NSString *duetVideoPath;
@property (copy, nonatomic) NSString *fixedPartOfTitle;
@property (nonatomic) long long chainLength;
@property (nonatomic) long long step;
@property (nonatomic) BOOL isDuetSing;
@property (nonatomic) BOOL isDuetUpload;
@property (nonatomic) long long duetUploadType;
@property (copy, nonatomic) NSString *duetGroupId;
@property (nonatomic) long long duetGroupDuration;
@property (copy, nonatomic) NSString *mainMusicId;
@property (nonatomic) long long materialMediaType;
@property (copy, nonatomic) NSString *originDuetResourceUri;
@property (nonatomic) long long duetCreateMediaType;
@property (nonatomic) long long duetCreateDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)acc_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_Draft;
+ (id)sourceAwemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
