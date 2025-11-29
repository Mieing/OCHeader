@class NSString, AWEProfileEndorsementSubtitleInfo;

@interface AWEProfileEndorsementInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *darkImageUrl;
@property (copy, nonatomic) NSString *lightImageUrl;
@property (copy, nonatomic) NSString *trackerLinkType;
@property (nonatomic) unsigned long long lineBreakType;
@property (copy, nonatomic) AWEProfileEndorsementSubtitleInfo *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subtitleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
