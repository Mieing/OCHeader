@class NSString;

@interface AWEAwemeSearchVideoAbstractSectionPrefixModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSString *iconURL;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *panelIconURL;
@property (readonly, nonatomic) NSString *blackPanelIconURL;
@property (readonly, nonatomic) NSString *descIconURL;
@property (readonly, nonatomic) NSString *blackDescIconURL;
@property (readonly, nonatomic) long long descIconWidth;
@property (readonly, nonatomic) long long descIconHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
