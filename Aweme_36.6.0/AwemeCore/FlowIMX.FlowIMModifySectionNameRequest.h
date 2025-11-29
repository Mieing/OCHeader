@class NSString;

@interface FlowIMX.FlowIMModifySectionNameRequest : NSObject <NSObject> {
    void /* function */ sectionID;
    void /* function */ conversationID;
    void /* function */ sectionName;
}

@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic, copy) NSString *conversationID;
@property (nonatomic, copy) NSString *sectionName;

- (void).cxx_destruct;
- (id)init;

@end
