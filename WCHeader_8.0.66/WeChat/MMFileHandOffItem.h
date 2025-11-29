@class NSString, CMessageWrap;

@interface MMFileHandOffItem : MMHandOffItem <YYModel, NSCopying>

@property (copy, nonatomic) NSString *filetype;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) unsigned long long size;
@property (nonatomic) long long source;
@property (nonatomic) long long id;
@property (copy, nonatomic) NSString *extid;
@property (copy, nonatomic) NSString *cdnurl;
@property (copy, nonatomic) NSString *aeskey;
@property (copy, nonatomic) NSString *authkey;
@property (nonatomic) long long filestatus;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned int sdkversion;
@property (copy, nonatomic) NSString *mediaid;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelPropertyBlacklistForConfigTag:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromMinimizeTaskData:(id)a0;
- (id)getChatName;
- (id)getMessageWrap;
- (BOOL)canUpload;
- (id)getFilePath;
- (id)getRecordClientMsgID;
- (BOOL)canRecordFileUpload;
- (void).cxx_destruct;

@end
