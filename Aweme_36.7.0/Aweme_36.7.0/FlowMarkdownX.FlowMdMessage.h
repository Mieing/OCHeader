@class NSString, NSArray, NSDictionary, _TtC13FlowMarkdownX19FlowMdBuilderResult;

@interface FlowMarkdownX.FlowMdMessage : NSObject {
    void /* function */ messageID;
    void /* function */ conversationID;
    void /* function */ mdSource;
    void /* function */ captionLinks;
    void /* function */ insertInfos;
    void /* function */ replaceInfos;
    void /* function */ botID;
    void /* function */ bizContext;
    void /* function */ ext;
}

@property (nonatomic, readonly) NSString *messageID;
@property (nonatomic, readonly) NSString *conversationID;
@property (nonatomic, readonly) NSString *mdSource;
@property (nonatomic, readonly) long long streamingStatus;
@property (nonatomic) BOOL isThinking;
@property (nonatomic, copy) NSArray *captionLinks;
@property (nonatomic, copy) NSArray *insertInfos;
@property (nonatomic, copy) NSArray *replaceInfos;
@property (nonatomic, retain) _TtC13FlowMarkdownX19FlowMdBuilderResult *prefixContentData;
@property (nonatomic, copy) NSString *botID;
@property (nonatomic, copy) NSDictionary *bizContext;
@property (nonatomic, copy) NSDictionary *ext;

- (id)initWithMessageID:(id)a0 conversationID:(id)a1 mdSource:(id)a2 streamingStatus:(long long)a3 isThinking:(BOOL)a4 ext:(id)a5;
- (void).cxx_destruct;
- (id)init;

@end
