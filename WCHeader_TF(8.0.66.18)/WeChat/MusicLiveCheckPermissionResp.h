@class NSString, BaseResponse;

@interface MusicLiveCheckPermissionResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long permissionBits;
@property (retain, nonatomic) NSString *statusVerifyInfo;
@property (retain, nonatomic) NSString *songid;
@property (retain, nonatomic) NSString *finderunicommentAppname;
@property (retain, nonatomic) NSString *finderunicommentEntityId;

+ (void)initialize;

@end
