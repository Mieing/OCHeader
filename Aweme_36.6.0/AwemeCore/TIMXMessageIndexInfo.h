@class NSString, NSMutableArray;
@protocol TIMXMessageModelProtocol;

@interface TIMXMessageIndexInfo : NSObject

@property (nonatomic) long long minIndexV2;
@property (nonatomic) long long maxIndexV2;
@property (nonatomic) long long realMinIndexV2;
@property (nonatomic) long long realMaxIndexV2;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) id<TIMXMessageModelProtocol> msgWithMinIndexV2;
@property (retain, nonatomic) id<TIMXMessageModelProtocol> msgWithMaxIndexV2;
@property (retain, nonatomic) NSMutableArray *indexV2Arr;
@property (copy, nonatomic) NSString *indexV2ArrToString;

- (void).cxx_destruct;

@end
