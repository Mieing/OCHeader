@class NSString;

@interface StatusCommentDataItem : NSObject

@property (copy, nonatomic) NSString *fromUsername;
@property (copy, nonatomic) NSString *textStateId;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSString *rootCommentId;
@property (copy, nonatomic) NSString *feedOwnerUsername;
@property (nonatomic) unsigned long long timeStamp;
@property (nonatomic) unsigned long long operation;
@property (nonatomic) unsigned int commentCount;
@property (readonly, nonatomic) BOOL isDeleted;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
