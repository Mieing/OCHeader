@class NSString;

@interface AWEIMImageIronManAnchorModel : NSObject <AWEIMImageAnchorModelProtocol>

@property (nonatomic) unsigned long long anchorType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *iconUrlV2;
@property (copy, nonatomic) NSString *mpID;
@property (copy, nonatomic) NSString *paramForSpecial;
@property (copy, nonatomic) NSString *anchorSceneName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getAvailableIconUrl;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentDictionary;

@end
