@class NSString;

@interface AWECommentAwemePublishModel : NSObject

@property (copy, nonatomic) NSString *uniqueKey;
@property (nonatomic) BOOL shouldShowGuideTips;
@property (nonatomic) BOOL shouldShowGoodGuideTips;
@property (copy, nonatomic) NSString *goodGuideTipsText;
@property (nonatomic) long long goodGuideTipsType;
@property (nonatomic) BOOL isShowingPublishButton;
@property (nonatomic) long long isShowedGuideTipsType;

- (void).cxx_destruct;

@end
