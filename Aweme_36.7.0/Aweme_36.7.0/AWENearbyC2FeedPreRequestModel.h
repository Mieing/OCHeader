@class AWENearbyGrouponResponse, NSArray, AWENearbyPageContext;

@interface AWENearbyC2FeedPreRequestModel : NSObject

@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (retain, nonatomic) AWENearbyGrouponResponse *preRequestResponse;
@property (nonatomic) BOOL isReqOnAir;
@property (copy, nonatomic) NSArray *dataWillShowInFmp;
@property (copy, nonatomic) id /* block */ completionWhenWillEnterGroupon;

- (id)initWithPageContext:(id)a0;
- (void).cxx_destruct;

@end
