@class MMListenHalfPanelInfo, NSString, MMListenMembershipJoinInfo_BindQQMusicSchemeInfo, MMListenMembershipJoinInfo_WecoinSchemeInfo, MMListenMembershipJoinInfo_SchemeInfo, MMListenMembershipJoinInfo_AdSchemeInfo, MMListenMembershipJoinInfo_H5Info;

@interface MMListenMembershipJoinInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *vipIconUrl;
@property (nonatomic) int jumpType;
@property (retain, nonatomic) MMListenMembershipJoinInfo_SchemeInfo *schemeInfo;
@property (retain, nonatomic) MMListenMembershipJoinInfo_H5Info *h5Info;
@property (retain, nonatomic) MMListenHalfPanelInfo *halfPanelInfo;
@property (retain, nonatomic) MMListenMembershipJoinInfo_WecoinSchemeInfo *wecoinSchemeInfo;
@property (retain, nonatomic) MMListenMembershipJoinInfo_AdSchemeInfo *adSchemeInfo;
@property (retain, nonatomic) MMListenMembershipJoinInfo_BindQQMusicSchemeInfo *bindQqMusicSchemeInfo;

+ (void)initialize;

@end
