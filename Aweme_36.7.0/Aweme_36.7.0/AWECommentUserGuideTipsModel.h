@class NSString, AWECommentUserGuideAlertModel;

@interface AWECommentUserGuideTipsModel : AWEBaseApiModel

@property (nonatomic) unsigned long long position;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *jumpText;
@property (copy, nonatomic) NSString *jumpURL;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *lightIconURL;
@property (copy, nonatomic) NSString *darkIconURL;
@property (retain, nonatomic) AWECommentUserGuideAlertModel *alertModel;
@property (copy, nonatomic) id /* block */ jumpBlock;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) double cellHeight;
@property (nonatomic) long long freqDay;
@property (nonatomic) long long freqNum;
@property (copy, nonatomic) NSString *storageKey;

+ (id)alertModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
