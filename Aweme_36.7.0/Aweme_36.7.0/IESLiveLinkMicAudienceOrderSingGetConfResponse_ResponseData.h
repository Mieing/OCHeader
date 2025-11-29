@class NSMutableArray;

@interface IESLiveLinkMicAudienceOrderSingGetConfResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *uiListArray;
@property (readonly, nonatomic) unsigned long long uiListArray_Count;
@property (nonatomic) long long recommendUiType;

+ (id)descriptor;

@end
