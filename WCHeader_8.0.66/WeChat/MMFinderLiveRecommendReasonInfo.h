@class NSString;

@interface MMFinderLiveRecommendReasonInfo : NSObject

@property (retain, nonatomic) NSString *recommendReason;
@property (nonatomic) BOOL isRecommendReasonShowInLiveComment;
@property (readonly, nonatomic) BOOL needShowInLiveComment;

+ (id)createRecommendReasonInfo:(id)a0 showInLiveComment:(BOOL)a1;

- (void).cxx_destruct;

@end
