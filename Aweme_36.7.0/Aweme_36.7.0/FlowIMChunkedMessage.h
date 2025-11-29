@class NSString, NSDictionary;

@interface FlowIMChunkedMessage : NSObject {
    void /* function */ messageID;
    void /* function */ bizContentType;
    void /* function */ content;
    void /* function */ ext;
}

@property (nonatomic) long long seqNo;
@property (nonatomic, copy) NSString *messageID;
@property (nonatomic) long long status;
@property (nonatomic) long long contentType;
@property (nonatomic, copy) NSString *bizContentType;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSDictionary *ext;

- (id)initWithSeqNo:(long long)a0 messageID:(id)a1 status:(long long)a2 contentType:(long long)a3 bizContentType:(id)a4 content:(id)a5 ext:(id)a6;
- (void).cxx_destruct;
- (id)init;

@end
