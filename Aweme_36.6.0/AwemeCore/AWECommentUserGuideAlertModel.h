@class NSString;

@interface AWECommentUserGuideAlertModel : AWEBaseApiModel

@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *jumpText;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) id /* block */ jumpBlock;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long freqDay;
@property (nonatomic) long long freqNum;
@property (copy, nonatomic) NSString *storageKey;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
