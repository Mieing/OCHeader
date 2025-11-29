@class NSString;

@interface AWEInteractionExtraModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *stickerID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *popIcon;
@property (copy, nonatomic) NSString *popText;
@property (copy, nonatomic) NSString *popImage;
@property (copy, nonatomic) NSString *offlineToast;
@property (copy, nonatomic) NSString *schemeURL;
@property (copy, nonatomic) NSString *clickableOpenURL;
@property (copy, nonatomic) NSString *clickableWebURL;
@property (nonatomic) double heightOfView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
