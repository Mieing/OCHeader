@class NSString, IESGCPPBUpdateChangeInfo;

@interface IESGCPPBUpdateAnnouncement : GPBMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) IESGCPPBUpdateChangeInfo *changeInfo;
@property (nonatomic) BOOL hasChangeInfo;
@property (nonatomic) int updateType;

+ (id)descriptor;

@end
