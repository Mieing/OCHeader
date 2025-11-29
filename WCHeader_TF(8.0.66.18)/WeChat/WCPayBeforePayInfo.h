@class NSString;

@interface WCPayBeforePayInfo : NSObject

@property (nonatomic) long long m_notifyFlag;
@property (retain, nonatomic) NSString *m_notifyWording;
@property (retain, nonatomic) NSString *m_leftButtonWording;
@property (retain, nonatomic) NSString *m_rightButtonWording;
@property (retain, nonatomic) NSString *m_confirmButtonWording;

+ (id)fromDictionary:(id)a0;

- (void)checkValueOrFillWithDefault;
- (void).cxx_destruct;

@end
