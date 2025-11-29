@class NSString, NSArray;

@interface TSPKEntryUnitModel : NSObject

@property (copy, nonatomic) NSString *entryIdentifier;
@property (copy, nonatomic) id /* block */ initAction;
@property (nonatomic) unsigned long long storeType;
@property (copy, nonatomic) NSString *pipelineType;
@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) NSString *clazzName;
@property (copy, nonatomic) NSArray *apis;
@property (copy, nonatomic) NSArray *c_apis;

- (void).cxx_destruct;

@end
