@class NSString;

@interface AWECommentInputViewTextConfigModel : NSObject

@property (copy, nonatomic) id /* block */ textViewPlaceHolderString;
@property (copy, nonatomic) id /* block */ textViewPlaceHolderAttributedString;
@property (nonatomic) long long textMaxLength;
@property (nonatomic) unsigned long long overMaxStyle;
@property (nonatomic) BOOL shouldForbidPublish;
@property (copy, nonatomic) NSString *forbidPublishToastContent;
@property (nonatomic) long long hashtagMaxCount;
@property (copy, nonatomic) NSString *prefixText;

- (void).cxx_destruct;
- (id)init;

@end
