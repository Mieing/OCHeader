@class NSString, NSArray, AWECommentTemplateCellTagModel;

@interface AWECommentTemplateCellUserModel : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *avatar;
@property (retain, nonatomic) AWECommentTemplateCellTagModel *tagModel;

- (void).cxx_destruct;
- (id)init;

@end
