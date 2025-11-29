@class NSString, NSArray;

@interface AWELiveLocalLifeLynxModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *renderType;
@property (copy, nonatomic) NSString *siteType;
@property (copy, nonatomic) NSString *sURL;
@property (copy, nonatomic) NSString *lynxSchema;
@property (retain, nonatomic) NSArray *resourceChannelList;
@property (retain, nonatomic) NSArray *secondPageChannelList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
