@class NSString, AWEURLModel;

@interface AWEHangoutTagModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tagID;
@property (retain, nonatomic) AWEURLModel *avatar;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *subText;
@property (copy, nonatomic) NSString *lightIconUrl;
@property (copy, nonatomic) NSString *darkIconUrl;
@property (copy, nonatomic) NSString *lightTextColor;
@property (copy, nonatomic) NSString *darkTextColor;
@property (copy, nonatomic) NSString *lightBgColor;
@property (copy, nonatomic) NSString *darkBgColor;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *labelType;
@property (nonatomic) long long location;
@property (nonatomic) long long isClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
