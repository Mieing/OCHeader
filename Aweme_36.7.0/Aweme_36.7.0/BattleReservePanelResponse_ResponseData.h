@class NSString, NSMutableArray;

@interface BattleReservePanelResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *tips;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) unsigned long long optionsArray_Count;

+ (id)descriptor;

@end
