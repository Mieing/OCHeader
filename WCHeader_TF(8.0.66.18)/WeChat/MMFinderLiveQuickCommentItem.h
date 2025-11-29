@class NSString, MMFinderLiveQuickReplyModel;

@interface MMFinderLiveQuickCommentItem : NSObject

@property (retain, nonatomic) MMFinderLiveQuickReplyModel *originalReplyModel;
@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) NSString *content;

+ (id)convertFromQuickReplyModelArr:(id)a0;
+ (id)convertFromQuickReplyModelArrForOuterDisplay:(id)a0;
+ (id)guidePostCommentItem;

- (void).cxx_destruct;

@end
