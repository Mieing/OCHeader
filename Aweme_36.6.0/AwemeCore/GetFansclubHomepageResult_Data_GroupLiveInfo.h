@class NSString;

@interface GetFansclubHomepageResult_Data_GroupLiveInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *selectAnchorId;
@property (nonatomic) BOOL isManualSelect;
@property (copy, nonatomic) NSString *selectAnchorOpenId;

+ (id)descriptor;

@end
