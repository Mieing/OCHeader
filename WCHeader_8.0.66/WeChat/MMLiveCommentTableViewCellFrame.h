@class MMLiveCommentDataItem, MMLiveTaskId, NSString;

@interface MMLiveCommentTableViewCellFrame : NSObject <MMLiveCommentTableViewCellFrameInitializeProtocol>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) double cellHeight;
@property (readonly, nonatomic) double currCellHeight;
@property (nonatomic) BOOL isLastLine;
@property (nonatomic) BOOL isFirstLine;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) MMLiveCommentDataItem *comment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)liveCommentCellToCellMargin:(unsigned long long)a0;
+ (double)standardLiveCommentCellHeight:(unsigned long long)a0;

- (id)initWithTaskId:(id)a0;
- (void)calculateWithCommentInfo:(id)a0 isLastLine:(BOOL)a1;
- (void)calculateWithCommentInfo:(id)a0 isFirstLine:(BOOL)a1;
- (void)resetCellFrame;
- (void).cxx_destruct;

@end
