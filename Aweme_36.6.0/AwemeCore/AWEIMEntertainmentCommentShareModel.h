@class AWECommentModel, NSString, NSDictionary;

@interface AWEIMEntertainmentCommentShareModel : NSObject

@property (retain, nonatomic) AWECommentModel *commentModel;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) NSDictionary *yszCoverUrl;
@property (copy, nonatomic) NSString *yszName;
@property (copy, nonatomic) NSString *yszCid;
@property (copy, nonatomic) NSString *yszType;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL commentUnavailable;

- (id)initWithCommentModel:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
