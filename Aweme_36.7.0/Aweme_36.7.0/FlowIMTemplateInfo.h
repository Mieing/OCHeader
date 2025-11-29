@class NSString, FlowIMBotStats, NSDictionary;

@interface FlowIMTemplateInfo : NSObject {
    void /* function */ templateId;
    void /* function */ botId;
    void /* function */ templateName;
    void /* function */ traceMap;
}

@property (nonatomic, copy) NSString *templateId;
@property (nonatomic, copy) NSString *botId;
@property (nonatomic, copy) NSString *templateName;
@property (nonatomic, retain) FlowIMBotStats *botStats;
@property (nonatomic, copy) NSDictionary *traceMap;

- (id)initWithTemplateId:(id)a0 botId:(id)a1 templateName:(id)a2 botStats:(id)a3 traceMap:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
