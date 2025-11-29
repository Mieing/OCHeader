@class NSString;

@interface FurionMetaFactorRegisterInfo : FurionBaseFactorRegisterInfo

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *eventFilter;
@property (retain, nonatomic) NSString *eventParamsFieldName;

- (void).cxx_destruct;

@end
