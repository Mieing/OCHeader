@class NSString;

@interface AWEPadPolymericChannelSectionHeaderTabModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long tabID;
@property (retain, nonatomic) NSString *tabTitle;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) BOOL isCurrentLanding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
