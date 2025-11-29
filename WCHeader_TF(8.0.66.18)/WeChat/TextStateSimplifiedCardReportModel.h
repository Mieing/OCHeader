@class NSString;

@interface TextStateSimplifiedCardReportModel : NSObject

@property (retain, nonatomic) NSString *textStateId;
@property (nonatomic) long long scene;
@property (nonatomic) long long action;
@property (nonatomic) unsigned long long actionTimestamp;
@property (nonatomic) long long exitType;
@property (nonatomic) unsigned long long duration;
@property (retain, nonatomic) NSString *sceneSessionId;
@property (retain, nonatomic) NSString *cardListId;
@property (nonatomic) unsigned long long requestId;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
