@class NSString;

@interface IESGCPPBMaintainInfo : GPBMessage

@property (nonatomic) BOOL isMaintain;
@property (copy, nonatomic) NSString *maintainText;
@property (copy, nonatomic) NSString *title;

+ (id)descriptor;

@end
