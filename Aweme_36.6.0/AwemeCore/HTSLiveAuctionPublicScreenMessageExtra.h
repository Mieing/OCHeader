@class NSString, NSMutableArray;

@interface HTSLiveAuctionPublicScreenMessageExtra : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *imType;
@property (retain, nonatomic) NSMutableArray *coreDataArray;
@property (readonly, nonatomic) unsigned long long coreDataArray_Count;

+ (id)descriptor;

@end
