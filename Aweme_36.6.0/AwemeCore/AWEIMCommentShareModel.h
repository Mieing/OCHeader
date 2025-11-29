@class AWECommentModel, NSString, AWEAwemeModel;

@interface AWEIMCommentShareModel : NSObject <NSCoding>

@property (retain, nonatomic) AWEAwemeModel *aweModel;
@property (nonatomic) BOOL awemeUnavailable;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (nonatomic) BOOL commentUnavailable;
@property (copy, nonatomic) NSString *awemeTitle;

- (id)initWithAweModel:(id)a0 commentModel:(id)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
