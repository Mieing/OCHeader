@class AWEIMElfBotMemorySyncBriefModel, NSString, NSDictionary, NSArray, AWEIMElfBotMemoryRawDataModel;

@interface AWEIMElfBotMemorySyncDataModel : NSObject

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSDictionary *syncUpdateTime;
@property (copy, nonatomic) NSArray *forceReplace;
@property (copy, nonatomic) NSArray *forceSync;
@property (retain, nonatomic) AWEIMElfBotMemorySyncBriefModel *brief;
@property (retain, nonatomic) AWEIMElfBotMemoryRawDataModel *remoteData;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
