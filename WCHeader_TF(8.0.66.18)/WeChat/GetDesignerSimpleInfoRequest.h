@class NSString, UGCDesignerInfo;

@interface GetDesignerSimpleInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *designerId;
@property (nonatomic) unsigned int reqType;
@property (retain, nonatomic) UGCDesignerInfo *ugcdesignerInfo;

+ (void)initialize;

@end
