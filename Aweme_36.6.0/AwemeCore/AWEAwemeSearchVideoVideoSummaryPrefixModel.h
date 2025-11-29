@class NSString;

@interface AWEAwemeSearchVideoVideoSummaryPrefixModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *descIcon;
@property (copy, nonatomic) NSString *descIconDark;
@property (nonatomic) long long descIconWidth;
@property (nonatomic) long long descIconHeight;
@property (copy, nonatomic) NSString *panelIconUrl;
@property (copy, nonatomic) NSString *panelIconUrlDark;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
