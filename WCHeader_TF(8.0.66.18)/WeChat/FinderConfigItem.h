@class NSString, NSData, NSMutableArray;

@interface FinderConfigItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *configName;
@property (retain, nonatomic) NSData *configValue;
@property (retain, nonatomic) NSMutableArray *cgiNumbers;

+ (void)initialize;

- (void)setCgiNumbers:(id)a0;
- (id)cgiNumbers;
- (void)setConfigValue:(id)a0;
- (id)configValue;
- (void)setConfigName:(id)a0;
- (id)configName;

@end
