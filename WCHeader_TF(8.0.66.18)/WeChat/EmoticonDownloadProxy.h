@class NSString, NSObject;
@protocol EmoticonDownloadProxyDelegate;

@interface EmoticonDownloadProxy : NSObject

@property (weak, nonatomic) id<EmoticonDownloadProxyDelegate> delegate;
@property (retain, nonatomic) NSObject *m_userInfo;
@property (retain, nonatomic) NSString *m_filePath;
@property (nonatomic) BOOL needNotifyPartLen;

- (id)initWithMd5:(id)a0;
- (void)startRequest;
- (BOOL)isActive;
- (void).cxx_destruct;

@end
