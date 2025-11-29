@class NewLifePostInfo;

@interface NewLifeSelectPhotoReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int limit;
@property (retain, nonatomic) NewLifePostInfo *postInfo;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned int pickerType;

+ (void)initialize;

@end
