@class NSString;

@interface AWECommentPictureChallengeConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *configID;
@property (copy, nonatomic) NSString *inputText;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subText;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *innerText;
@property (copy, nonatomic) NSString *innerPublishText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
