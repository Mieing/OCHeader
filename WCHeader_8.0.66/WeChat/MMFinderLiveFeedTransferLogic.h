@class MMFinderLiveFeedTransferInData, MMFinderLiveFeedTransferOutData, MMFinderLiveFeedDataLogic;

@interface MMFinderLiveFeedTransferLogic : NSObject

@property (weak, nonatomic) MMFinderLiveFeedDataLogic *context;
@property (retain, nonatomic) MMFinderLiveFeedTransferInData *in;
@property (retain, nonatomic) MMFinderLiveFeedTransferOutData *out;
@property (nonatomic) BOOL hasReusedOut;

- (id)initWithContext:(id)a0;
- (void)prepareEnterLive;
- (void)prepareGoBackFeedStream:(id)a0;
- (void)resetTransferData;
- (void)resetTransferInData;
- (void)resetTransferOutData;
- (void)assembleTransferInData;
- (void)assembleTransferOutData:(id)a0;
- (void).cxx_destruct;

@end
