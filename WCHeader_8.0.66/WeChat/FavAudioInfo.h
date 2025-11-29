@class NSString;

@interface FavAudioInfo : NSObject

@property (nonatomic) unsigned int m_uiAudioFormat;
@property (nonatomic) unsigned int m_uiAudioID;
@property (nonatomic) unsigned int m_uiAudioDuration;
@property (retain, nonatomic) NSString *m_nsAudioID;
@property (retain, nonatomic) NSString *m_nsAudioPath;
@property (nonatomic) BOOL m_bEnable;
@property (nonatomic) BOOL m_bForceSpeeker;

- (void).cxx_destruct;

@end
