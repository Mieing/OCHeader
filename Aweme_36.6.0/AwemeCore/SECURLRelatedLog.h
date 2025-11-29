@class NSString, NSSet, NSArray, NSDictionary, SECStandardURL;

@interface SECURLRelatedLog : NSObject

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) SECStandardURL *standardRefer;
@property (copy) NSSet *relatedKeyPath;
@property (retain, nonatomic) SECStandardURL *api;
@property (nonatomic) double happened;
@property (nonatomic) double expiryTime;
@property (copy, nonatomic) NSArray *hitFeatures;
@property (retain, nonatomic) NSDictionary *associatedObj;

- (void)addRelated:(id)a0;
- (void).cxx_destruct;
- (id)keyIndex;

@end
