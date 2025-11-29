@class NSString, AWELuckyCatClientExtraModel;

@interface AWELuckyCatFeedRedirectModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long showSecond;
@property (nonatomic) long long taskId;
@property (copy, nonatomic) NSString *tasKey;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) long long showStyle;
@property (copy, nonatomic) NSString *landingType;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long nextReachTime;
@property (nonatomic) long long countdown;
@property (retain, nonatomic) AWELuckyCatClientExtraModel *reachingExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
