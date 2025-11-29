@class AWEGrouponPageContext, NSArray, AWEGrouponResponse;

@interface AWEGrouponC2FeedPreRequestModel : NSObject

@property (retain, nonatomic) AWEGrouponPageContext *pageContext;
@property (retain, nonatomic) AWEGrouponResponse *preRequestResponse;
@property (nonatomic) BOOL isReqOnAir;
@property (copy, nonatomic) NSArray *dataWillShowInFmp;
@property (copy, nonatomic) id /* block */ completionWhenWillEnterGroupon;

- (id)initWithPageContext:(id)a0;
- (void).cxx_destruct;

@end
