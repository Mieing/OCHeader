@class NSString;

@interface WeChat.WCPayJsApiPaySesssionReportData : NSObject {
    void /* unknown type, empty encoding */ chatType;
    void /* unknown type, empty encoding */ sendType;
    void /* unknown type, empty encoding */ sessionType;
    void /* unknown type, empty encoding */ sessionName;
    void /* unknown type, empty encoding */ timelineObjId;
    void /* unknown type, empty encoding */ msgSvrId;
}

@property (nonatomic, readonly) NSString *sessionName;
@property (nonatomic, readonly) NSString *timelineObjId;
@property (nonatomic, readonly) NSString *msgSvrId;
@property (nonatomic, readonly) NSString *chatTypeValue;
@property (nonatomic, readonly) NSString *sendTypeValue;
@property (nonatomic, readonly) NSString *sessionTypeValue;
@property (nonatomic, readonly) NSString *description;

- (id)initWithTimelineSender:(id)a0;
- (id)initWithTalker:(id)a0 sender:(id)a1;
- (id)initWithGetUrlInfoSession:(id)a0 msgUserName:(id)a1 msgSvrId:(id)a2;
- (id)initWithTopicReportItem:(id)a0;
- (id)initWithFinderData:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
