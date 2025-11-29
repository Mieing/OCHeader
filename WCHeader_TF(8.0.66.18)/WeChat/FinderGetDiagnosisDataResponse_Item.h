@class NSString;

@interface FinderGetDiagnosisDataResponse_Item : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) unsigned int textIndex;
@property (nonatomic) unsigned int objectStatus;

+ (void)initialize;

@end
