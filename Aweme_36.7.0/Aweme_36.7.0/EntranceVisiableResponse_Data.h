@class NSString, HTSLiveStreamUrl;

@interface EntranceVisiableResponse_Data : IESLivePBBaseMessage

@property (nonatomic) BOOL disableEntrance;
@property (copy, nonatomic) NSString *magicBoxStartType;
@property (nonatomic) int pushType;
@property (retain, nonatomic) HTSLiveStreamUrl *streamURL;
@property (nonatomic) BOOL hasStreamURL;
@property (copy, nonatomic) NSString *entranceSchemaURL;
@property (copy, nonatomic) NSString *quickSchemaURL;

+ (id)descriptor;

@end
