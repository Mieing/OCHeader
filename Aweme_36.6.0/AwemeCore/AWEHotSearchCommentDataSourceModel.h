@class NSString, NSNumber, NSDictionary;

@interface AWEHotSearchCommentDataSourceModel : NSObject

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *requestPath;
@property (copy, nonatomic) NSDictionary *requestParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
