@class NSDictionary, NSArray;

@interface BDLynxChannelIOSConfig : BDLynxBaseConfig

@property (retain, nonatomic) NSDictionary *templateConfigMapper;
@property (copy, nonatomic) NSArray *templateList;

- (id)templateConfigForCardID:(id)a0;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;

@end
