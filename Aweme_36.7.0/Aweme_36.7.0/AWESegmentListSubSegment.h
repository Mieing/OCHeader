@class NSMutableArray;

@interface AWESegmentListSubSegment : NSObject

@property (nonatomic) long long beginPos;
@property (nonatomic) long long endPos;
@property (retain, nonatomic) NSMutableArray *detailElements;
@property (retain, nonatomic) id extraInfo;

- (void).cxx_destruct;

@end
