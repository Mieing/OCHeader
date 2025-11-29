@class NSString;

@interface AWECommentTitleInfoConfig : NSObject

@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *tagText;
@property (nonatomic) BOOL hasCoCreatorInfo;
@property (nonatomic) BOOL coCreatorInInviting;
@property (copy, nonatomic) NSString *coCreatorTip;

- (void).cxx_destruct;

@end
