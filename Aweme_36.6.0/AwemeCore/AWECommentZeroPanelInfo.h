@class NSString;

@interface AWECommentZeroPanelInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *biz;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *urlText;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *iconLightURL;
@property (copy, nonatomic) NSString *iconDarkURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
