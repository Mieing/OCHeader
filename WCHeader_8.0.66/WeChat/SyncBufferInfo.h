@class NSData, NSString;

@interface SyncBufferInfo : NSObject

@property (readonly, nonatomic) NSData *m_dtSyncBuffer;
@property (readonly, nonatomic) NSString *m_nsUserName;

- (id)initWithUserName:(id)a0 SyncBuffer:(id)a1;
- (void).cxx_destruct;

@end
