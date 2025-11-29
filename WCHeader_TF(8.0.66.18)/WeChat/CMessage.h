@class NSDictionary, ProtobufCGIWrap;

@interface CMessage : NSObject

@property (nonatomic) unsigned int m_uiMessage;
@property (nonatomic) unsigned int m_uiEventID;
@property (retain, nonatomic) NSDictionary *m_dicMessageInfo;
@property (retain, nonatomic) ProtobufCGIWrap *m_pbCGIWrap;
@property (nonatomic) BOOL m_bNotify;

- (id)init;
- (void).cxx_destruct;

@end
