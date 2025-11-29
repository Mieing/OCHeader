@interface WebViewTimeProfileData : MMObject

@property (nonatomic) unsigned long long m_initTimeStamp;
@property (nonatomic) unsigned long long m_getA8KeyTimeStamp;
@property (nonatomic) unsigned long long m_startLoadTimeStamp;
@property (nonatomic) unsigned long long m_finishLoadTimeStamp;
@property (nonatomic) unsigned long long m_mainFrameGetA8KeyStartTimestamp;
@property (nonatomic) unsigned long long m_mainFrameGetA8KeyEndTimestamp;
@property (nonatomic) unsigned long long m_mainFrameLoadStartTimestamp;
@property (nonatomic) unsigned long long m_mainFrameCommitTimestamp;
@property (nonatomic) unsigned long long m_mainFrameLoadEndTimestamp;

@end
