@class NSString, NSDictionary, NSArray;

@interface BDLynxTemplateConfig : BDLynxBaseConfig

@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *cardPath;
@property (copy, nonatomic) NSString *cardVersion;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL hasExtResource;
@property (copy, nonatomic) NSArray *extURLPrefix;

- (id)dataForPath:(id)a0;
- (id)realURLForPath:(id)a0;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;

@end
