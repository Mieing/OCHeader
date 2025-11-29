@class NSString, NSDictionary;

@interface AWEMRSideBarNoticeBadgeInfoModel : NSObject <AWEMessageReachSideBarBadgeModelProtocol>

@property (copy, nonatomic) NSString *bussinessId;
@property (nonatomic) BOOL needHide;
@property (nonatomic) unsigned long long uiStyle;
@property (nonatomic) long long badgeCnt;
@property (copy, nonatomic) NSDictionary *templateInfoDict;
@property (nonatomic) double noticeSendTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
