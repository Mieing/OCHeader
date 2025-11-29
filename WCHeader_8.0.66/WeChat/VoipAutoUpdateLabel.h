@class MMTimer, NSString;

@interface VoipAutoUpdateLabel : MMUILabel

@property (retain, nonatomic) MMTimer *m_actingTimer;
@property (nonatomic) unsigned int m_dotCountIncresement;
@property (retain, nonatomic) NSString *m_baseText;

- (void)dealloc;
- (void)autoUpdateString;
- (void)clearActingTimer;
- (void).cxx_destruct;

@end
