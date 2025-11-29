@class NSString, NSAttributedString;

@interface AWEIMBaseCommentShareMessage : AWEIMMessage

@property (copy, nonatomic) NSAttributedString *commentCopyText;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSString *commentSecUid;
@property (copy, nonatomic) NSString *commentUserName;
@property (nonatomic) long long commentType;
@property (copy, nonatomic) NSString *commentSortTags;
@property (copy, nonatomic) NSString *commentParentSortTags;
@property (copy, nonatomic) NSString *commentEnterFrom;

- (id)initWithContentDict:(id)a0;
- (id)getContentDict;
- (long long)p_commentTypeWithContentDict:(id)a0;
- (void).cxx_destruct;

@end
