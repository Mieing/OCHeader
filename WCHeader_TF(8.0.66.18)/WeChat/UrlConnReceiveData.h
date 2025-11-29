@interface UrlConnReceiveData : NSObject <NSCopying>

@property (nonatomic) unsigned int m_uiReceiveTimeStamp;
@property (nonatomic) unsigned int m_uiDataLength;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
