@class NSArray, NSDictionary, NSString, NSNumber;

@interface AWEPadHistoryListResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSDictionary *awemeDate;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
