@class NSString, AWELuckyCatFeedRedirectModel;

@interface AWELuckyCatPendantExtendedInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) AWELuckyCatFeedRedirectModel *feedRedirect;
@property (copy, nonatomic) NSString *taskType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
