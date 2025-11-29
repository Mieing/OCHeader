@class NSString, NSArray, AWEShareContext;

@interface AWEIMCommentMentionGroupShareSnackBarConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (copy, nonatomic) NSArray *shareUser;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *buttonType;

- (void).cxx_destruct;

@end
