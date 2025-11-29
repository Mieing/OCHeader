@class NSString, NSDictionary;

@interface AWEShareWebMetaCustomMobEventMap : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sharePanelShow;
@property (copy, nonatomic) NSString *ugChannelClick;
@property (copy, nonatomic) NSString *imHeadClick;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
