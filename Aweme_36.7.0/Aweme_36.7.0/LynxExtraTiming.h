@interface LynxExtraTiming : NSObject

@property (nonatomic) unsigned long long openTime;
@property (nonatomic) unsigned long long containerInitStart;
@property (nonatomic) unsigned long long containerInitEnd;
@property (nonatomic) unsigned long long prepareTemplateStart;
@property (nonatomic) unsigned long long prepareTemplateEnd;

- (id)toDictionary;

@end
