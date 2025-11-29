@class NSArray, NSString;

@interface AWECodeGenGetPickUserListResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *pickUserListModelArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long maxCursor;
@property (copy, nonatomic) NSString *statusMessage;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
