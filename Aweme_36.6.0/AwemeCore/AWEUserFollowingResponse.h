@class NSNumber, NSArray, NSString;

@interface AWEUserFollowingResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSNumber *minTime;
@property (retain, nonatomic) NSNumber *maxTime;
@property (copy, nonatomic) NSArray *userList;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *userID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hasMoreJSONTransformer;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
