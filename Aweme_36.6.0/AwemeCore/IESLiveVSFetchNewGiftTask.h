@class NSNumber;

@interface IESLiveVSFetchNewGiftTask : NSObject

@property (retain, nonatomic) NSNumber *giftID;
@property (copy, nonatomic) id /* block */ completionBlock;

- (id)taskInfos;
- (void)unionTask:(id)a0;
- (void).cxx_destruct;

@end
