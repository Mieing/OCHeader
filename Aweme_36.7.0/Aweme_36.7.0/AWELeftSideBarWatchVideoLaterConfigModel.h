@class NSString;

@interface AWELeftSideBarWatchVideoLaterConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL needLogin;
@property (retain, nonatomic) NSString *schemaUrl;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long moduleAppearCards;
@property (nonatomic) long long moduleMaxCards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
