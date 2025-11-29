@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWEFavoriteEffectsAndTemplatesListResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSArray *lists;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *longCursor;
@property (retain, nonatomic) NSNumber *sortedPosition;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSString *requestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
