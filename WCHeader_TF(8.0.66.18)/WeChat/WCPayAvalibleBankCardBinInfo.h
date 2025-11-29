@class NSArray, NSString;

@interface WCPayAvalibleBankCardBinInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSArray *m_arrBankCardBin;
@property (retain, nonatomic) NSString *m_nsVesionNumber;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
