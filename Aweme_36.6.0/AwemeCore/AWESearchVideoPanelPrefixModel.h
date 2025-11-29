@class NSString;

@interface AWESearchVideoPanelPrefixModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *panelIconURL;
@property (copy, nonatomic) NSString *blackPanelIconURL;
@property (copy, nonatomic) NSString *iconURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
