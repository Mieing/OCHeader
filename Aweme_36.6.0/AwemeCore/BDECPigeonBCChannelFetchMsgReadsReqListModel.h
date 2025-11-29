@class NSArray, NSError;

@interface BDECPigeonBCChannelFetchMsgReadsReqListModel : NSObject

@property (copy) NSArray *reqModels;
@property (copy) id /* block */ completion;
@property long long reqIndex;
@property (retain) NSError *error;
@property BOOL isBigRequest;

- (void).cxx_destruct;

@end
