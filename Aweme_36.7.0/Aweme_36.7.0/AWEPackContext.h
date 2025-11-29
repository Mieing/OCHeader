@class NSArray, NSDictionary, AWEPackRequest;

@interface AWEPackContext : NSObject

@property (retain, nonatomic) AWEPackRequest *request;
@property (retain, nonatomic) NSArray *idList;
@property (retain, nonatomic) NSArray *materialList;
@property (retain, nonatomic) NSDictionary *materialMap;
@property (nonatomic) long long executionType;
@property (retain, nonatomic) Class modelClass;

- (id)initWithRequest:(id)a0 materialClass:(Class)a1;
- (void).cxx_destruct;

@end
