@class NSString, NSMutableArray;

@interface WCAddressStageDataStruct : NSObject <NSCoding>

@property (nonatomic) unsigned int m_uiAddressStage;
@property (retain, nonatomic) NSString *m_nsAddressStageID;
@property (retain, nonatomic) NSString *m_nsAddressPostCode;
@property (retain, nonatomic) NSString *m_nsAddressStageName;
@property (retain, nonatomic) NSMutableArray *m_arrAddressSubStageData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
