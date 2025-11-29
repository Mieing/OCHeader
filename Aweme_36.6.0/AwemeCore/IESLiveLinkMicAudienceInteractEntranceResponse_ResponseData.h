@class NSMutableArray;

@interface IESLiveLinkMicAudienceInteractEntranceResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *entranceListArray;
@property (readonly, nonatomic) unsigned long long entranceListArray_Count;
@property (retain, nonatomic) NSMutableArray *entrancePosListArray;
@property (readonly, nonatomic) unsigned long long entrancePosListArray_Count;
@property (retain, nonatomic) NSMutableArray *bannerListArray;
@property (readonly, nonatomic) unsigned long long bannerListArray_Count;

+ (id)descriptor;

@end
