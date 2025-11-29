@class NSNumber, NSString, NSArray;

@interface AWEHotSearchCommentAISummaryHeaderModel : NSObject <AWECommonFeedCellModelProtocol>

@property (nonatomic) double width;
@property (retain, nonatomic) NSNumber *position;
@property (retain, nonatomic) NSNumber *commentCount;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) double titleHeight;
@property (copy, nonatomic) NSArray *avatarUrlList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })cellSizeWithConstraintWidth:(double)a0;
- (void)configWithSectionData:(id)a0;
- (void).cxx_destruct;

@end
