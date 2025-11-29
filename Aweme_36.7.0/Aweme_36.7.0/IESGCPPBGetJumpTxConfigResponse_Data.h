@class NSString, NSMutableArray;

@interface IESGCPPBGetJumpTxConfigResponse_Data : GPBMessage

@property (retain, nonatomic) NSMutableArray *jumpTxInfosArray;
@property (readonly, nonatomic) unsigned long long jumpTxInfosArray_Count;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameIcon;

+ (id)descriptor;

@end
