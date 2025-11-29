@class NSArray;

@interface BDECPigeonBCChannelFetchMsgReadsReqModel : NSObject

@property (copy, nonatomic) NSArray *convIDs;
@property (copy, nonatomic) NSArray *convShortIDs;
@property (copy, nonatomic) NSArray *arrUserID;
@property (nonatomic) int inbox;

- (void).cxx_destruct;

@end
