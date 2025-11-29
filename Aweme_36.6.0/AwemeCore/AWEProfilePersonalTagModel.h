@class NSString;

@interface AWEProfilePersonalTagModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long tagType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *darkImageUrl;
@property (copy, nonatomic) NSString *lightImageUrl;
@property (copy, nonatomic) NSString *lightTextColor;
@property (copy, nonatomic) NSString *darkTextColor;
@property (copy, nonatomic) NSString *lightBGColor;
@property (copy, nonatomic) NSString *darkBGColor;
@property (copy, nonatomic) NSString *mobParamsStr;
@property (copy, nonatomic) NSString *trackerLinkType;
@property (copy, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
