@class NSString, NSArray;

@interface BDPTradeCommentModel : NSObject

@property (nonatomic) BOOL canComment;
@property (nonatomic) unsigned long long commentType;
@property (nonatomic) unsigned long long stayTimeLimit;
@property (copy, nonatomic) NSString *openPath;
@property (nonatomic) unsigned long long schemaType;
@property (nonatomic) unsigned long long showType;
@property (nonatomic) unsigned long long score;
@property (nonatomic) unsigned long long totalCount;
@property (copy, nonatomic) NSString *commentTagIcon;
@property (retain, nonatomic) NSArray *chooseComments;

+ (id)modelWithDict:(id)a0;

- (void)mergeWithCanCommentDict:(id)a0;
- (void).cxx_destruct;

@end
