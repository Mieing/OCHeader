@class NSString, NSDictionary, NSURL, NSNumber;

@interface AWESBCMultiAccountPushModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSNumber *pushShowType;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *contentPrefix;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, nonatomic) NSURL *imageUrl;
@property (readonly, copy, nonatomic) NSString *openURL;
@property (readonly, nonatomic) NSNumber *gid;
@property (readonly, nonatomic) NSNumber *rid;
@property (readonly, copy, nonatomic) NSString *extraStr;
@property (readonly, copy, nonatomic) NSString *businessType;
@property (readonly, nonatomic) NSString *actionText;
@property (readonly, nonatomic) NSURL *subImageUrl;
@property (readonly, copy, nonatomic) NSString *aggrNoticeType;
@property (readonly, copy, nonatomic) NSString *specNoticeType;
@property (copy, nonatomic) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
