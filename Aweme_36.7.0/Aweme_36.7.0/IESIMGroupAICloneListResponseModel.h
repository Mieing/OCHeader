@class NSString, NSArray;

@interface IESIMGroupAICloneListResponseModel : NSObject

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *nextCursor;
@property (retain, nonatomic) NSArray *bots;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
