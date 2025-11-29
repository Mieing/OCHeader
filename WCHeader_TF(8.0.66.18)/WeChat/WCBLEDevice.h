@class NSString;

@interface WCBLEDevice : NSObject

@property (copy, nonatomic) NSString *m_bleName;
@property (nonatomic) long long m_did;
@property (nonatomic) long long m_bleSimpleProto;
@property (copy, nonatomic) NSString *m_mac;
@property (nonatomic) long long m_profileID;

- (void).cxx_destruct;

@end
