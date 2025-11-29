@class AWEAwemeModel, AWESegmentListSubSegment;

@interface AWEUserProfileAdVideoInsertModel : NSObject

@property (retain, nonatomic) AWESegmentListSubSegment *requestCompletionSegment;
@property (nonatomic) long long resultSeqPos;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) long long insertIndex;
@property (nonatomic) BOOL isInModelSuccess;

- (void)updateInsertPos;
- (void).cxx_destruct;

@end
