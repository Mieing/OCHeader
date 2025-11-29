@class NSNumber, NSArray, NSString;

@interface AWEAddressBookListResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSArray *users;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSNumber *registerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
