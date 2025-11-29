@class UpdateWxaStarRecordRequest_StarWxaInfo;

@interface UpdateWxaStarRecordRequest_StarWxaSortOperation : WXPBGeneratedMessage

@property (retain, nonatomic) UpdateWxaStarRecordRequest_StarWxaInfo *self_;
@property (retain, nonatomic) UpdateWxaStarRecordRequest_StarWxaInfo *pre;
@property (retain, nonatomic) UpdateWxaStarRecordRequest_StarWxaInfo *next;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int oper;

+ (void)initialize;

@end
