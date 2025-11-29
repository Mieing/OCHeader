@class NSDictionary, NSString;

@interface AWEHPTabTrafficListModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSDictionary *blackListDict;
@property (copy, nonatomic) NSDictionary *whiteListDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldBlockWithChannelID:(id)a0;
- (BOOL)shouldAllowWithChannelID:(id)a0;
- (void).cxx_destruct;

@end
