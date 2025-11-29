@class HTSLiveCommon, NSMutableArray;

@interface HTSLiveGiftIconFlashMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *userIdsArray;
@property (readonly, nonatomic) unsigned long long userIdsArray_Count;
@property (nonatomic) long long recommendTime;
@property (nonatomic) long long notFlashAfter;

+ (id)descriptor;

@end
