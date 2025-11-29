@class NSString;

@interface IESLiveTempStateAreaModel : NSObject

@property (nonatomic) long long groupId;
@property (nonatomic) long long elemId;
@property (nonatomic) long long elemType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *stateMsg;
@property (copy, nonatomic) NSString *iconURLString;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *enterSchema;
@property (nonatomic) long long collectionCount;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL forbbidenStartByAudience;
@property (copy, nonatomic) NSString *gameCategory;

- (void).cxx_destruct;

@end
