@class NSString;

@interface AWELeftSideBarDynamicItemLinkTitleAppModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *linkMsg;
@property (nonatomic) BOOL needPoint;
@property (copy, nonatomic) NSString *linkSchema;
@property (copy, nonatomic) NSString *linkExtra;
@property (nonatomic) BOOL isClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
