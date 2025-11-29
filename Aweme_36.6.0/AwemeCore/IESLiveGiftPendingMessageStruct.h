@class NSNumber, GPBMessage, NSMutableArray;

@interface IESLiveGiftPendingMessageStruct : NSObject

@property (retain, nonatomic) NSNumber *resourceID;
@property (retain, nonatomic) GPBMessage *message;
@property (retain, nonatomic) NSMutableArray *neededAssetArray;
@property (nonatomic) long long retryCount;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
