@class NSString, HTSLiveCommon;

@interface HTSLiveContentOpenTrackReportMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int eventType;
@property (nonatomic) long long eventTime;
@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *openRoomId;
@property (copy, nonatomic) NSString *bizExtra;

+ (id)descriptor;

@end
