@interface MMSessionSetting : NSObject <NSCoding>

@property long long m_sessionImportTime;
@property unsigned int m_sessionVersion;
@property unsigned int m_sessionFailCount;
@property unsigned int m_sessionCount;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
